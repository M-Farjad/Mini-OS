#include <QApplication>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QCheckBox>
#include <QFileDevice>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Create the GUI elements
    QLabel *folderLabel = new QLabel("Select folder:");
    QLineEdit *folderLineEdit = new QLineEdit();
    QPushButton *folderButton = new QPushButton("Browse...");

    QLabel *nameLabel = new QLabel("File name:");
    QLineEdit *nameLineEdit = new QLineEdit();

    QLabel *ownerPermissionLabel = new QLabel("Owner Permissions:");
        QCheckBox *ownerReadCheckBox = new QCheckBox("Read");
        QCheckBox *ownerWriteCheckBox = new QCheckBox("Write");
        QCheckBox *ownerExecuteCheckBox = new QCheckBox("Execute");

        QLabel *groupPermissionLabel = new QLabel("Group Permissions:");
        QCheckBox *groupReadCheckBox = new QCheckBox("Read");
        QCheckBox *groupWriteCheckBox = new QCheckBox("Write");
        QCheckBox *groupExecuteCheckBox = new QCheckBox("Execute");

        QLabel *otherPermissionLabel = new QLabel("Other Permissions:");
        QCheckBox *otherReadCheckBox = new QCheckBox("Read");
        QCheckBox *otherWriteCheckBox = new QCheckBox("Write");
        QCheckBox *otherExecuteCheckBox = new QCheckBox("Execute");

        QPushButton *createButton = new QPushButton("Create file");

        // Set up the layout
        QVBoxLayout *layout = new QVBoxLayout();
        layout->addWidget(folderLabel);
        QHBoxLayout *folderLayout = new QHBoxLayout();
        folderLayout->addWidget(folderLineEdit);
        folderLayout->addWidget(folderButton);
        layout->addLayout(folderLayout);
        layout->addWidget(nameLabel);
        layout->addWidget(nameLineEdit);
        QHBoxLayout *permissionLayout = new QHBoxLayout();
        QVBoxLayout *ownerPermissionLayout = new QVBoxLayout();
        ownerPermissionLayout->addWidget(ownerPermissionLabel);
        ownerPermissionLayout->addWidget(ownerReadCheckBox);
        ownerPermissionLayout->addWidget(ownerWriteCheckBox);
        ownerPermissionLayout->addWidget(ownerExecuteCheckBox);
        permissionLayout->addLayout(ownerPermissionLayout);
        QVBoxLayout *groupPermissionLayout = new QVBoxLayout();
        groupPermissionLayout->addWidget(groupPermissionLabel);
        groupPermissionLayout->addWidget(groupReadCheckBox);
        groupPermissionLayout->addWidget(groupWriteCheckBox);
        groupPermissionLayout->addWidget(groupExecuteCheckBox);
        permissionLayout->addLayout(groupPermissionLayout);
        QVBoxLayout *otherPermissionLayout = new QVBoxLayout();
        otherPermissionLayout->addWidget(otherPermissionLabel);
        otherPermissionLayout->addWidget(otherReadCheckBox);
        otherPermissionLayout->addWidget(otherWriteCheckBox);
        otherPermissionLayout->addWidget(otherExecuteCheckBox);
        permissionLayout->addLayout(otherPermissionLayout);
        layout->addLayout(permissionLayout);
        layout->addWidget(createButton);

        // Set up the window
        QWidget *window = new QWidget();
        window->setLayout(layout);
        window->show();

        // Connect signals and slots
        QObject::connect(folderButton, &QPushButton::clicked, [=]() {
            QString folderPath = QFileDialog::getExistingDirectory(nullptr, "Select folder");
            if (!folderPath.isEmpty()) {
                folderLineEdit->setText(folderPath);
            }
        });

    QObject::connect(createButton, &QPushButton::clicked, [=]() {
        QString folderPath = folderLineEdit->text();
        QString fileName = nameLineEdit->text();
        if (!folderPath.isEmpty() && !fileName.isEmpty()) {
            QFile file(folderPath + "/" + fileName);
            if (file.open(QIODevice::WriteOnly)) {
                file.write("Hello, world!");
                file.close();

                // Set the file permissions
                QFileDevice::Permissions permissions = QFileDevice::ReadUser | QFileDevice::WriteUser | QFileDevice::ExeUser;
                if (ownerReadCheckBox->isChecked()) {
                    permissions |= QFileDevice::ReadUser;
                }
                if (ownerWriteCheckBox->isChecked()) {
                    permissions |= QFileDevice::WriteUser;
                }
                if (ownerExecuteCheckBox->isChecked()) {
                    permissions |= QFileDevice::ExeUser;
                }
                file.setPermissions(permissions);

                QMessageBox::information(nullptr, "File Created", "The file was created successfully.");
            }
        }
    });

    return app.exec();
}
