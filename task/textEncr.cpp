#include <iostream>

using namespace std;

char *decrypt(char *message, int length, int key)
{
    for (int i = 0; i < length; i++)
    {
        char c = message[i];
        if (isalpha(c))
        {
            c = toupper(c);
            // c - 65 numerical value of the letter + key (changes)
            // result % 26 +65 back ASCII
            c = ((c - 65 + key) % 26) + 65;
        }
        if (isdigit(c))
            c = ((c - '0' + key) % 10) + '0';
        message[i] = c;
    }
    return message;
}
int main()
{
    char message[] = "810 DYPHYB";
    int length = sizeof(message) - 1; // -1 to exclude the null terminator
    int key = 5;

    cout << "Original message: " << message << endl;

    decrypt(message, length, key);

    cout << "Encrypted message: " << message << endl;

    return 0;
}
