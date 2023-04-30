#include <iostream>

using namespace std;

char *decrypt(char *message, int length, int key)
{
    for (int i = 0; i < length; i++)
        message[i] = ((message[i] + key) % 256);
    return message;
}
int main()
{
    char message[] = "678%Kfwofi";
    int length = sizeof(message) - 1; // -1 to exclude the null terminator
    int key = 5;        //Enter the Key

    cout << "Original message: " << message << endl;

    decrypt(message, length, 256-key);

    cout << "Encrypted message: " << message << endl;

    return 0;
}
