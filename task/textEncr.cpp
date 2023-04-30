#include <iostream>

using namespace std;

char *encrypt(char *message, int length, int key)
{
    for (int i = 0; i < length; i++)
        message[i] = ((message[i] + key) % 256);
    return message;
}
int main()
{
    char message[] = "123 Farjad";
    int length = sizeof(message) - 1; // -1 to exclude the null terminator
    int key = 5;

    cout << "Original message: " << message << endl;

    encrypt(message, length, key);

    cout << "Encrypted message: " << message << endl;

    return 0;
}
