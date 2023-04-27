// #include <iostream>
// #include <fstream>
// #include <string>
// #include <openssl/aes.h>

// using namespace std;

// const int BUFFER_SIZE = 1024;

// void encrypt_file(string input_file, string output_file, string key)
// {
//     ifstream fin(input_file, ios::binary);
//     ofstream fout(output_file, ios::binary);

//     unsigned char iv[AES_BLOCK_SIZE];
//     memset(iv, 0x00, AES_BLOCK_SIZE);

//     AES_KEY aes_key
//         AES_set_encrypt_key((const unsigned char *)key.c_str(), key.length() * 8, &aes_key);

//     unsigned char in_buffer[BUFFER_SIZE];
//     unsigned char out_buffer[BUFFER_SIZE + AES_BLOCK_SIZE];

//     int bytes_read, bytes_written;
//     while (true)
//     {
//         fin.read((char *)in_buffer, BUFFER_SIZE);
//         bytes_read = fin.gcount();

//         AES_cbc_encrypt(in_buffer, out_buffer, bytes_read, &aes_key, iv, AES_ENCRYPT);

//         fout.write((char *)out_buffer, bytes_read + AES_BLOCK_SIZE);

//         if (fin.eof())
//             break;
//     }

//     fin.close();
//     fout.close();
// }

// void decrypt_file(string input_file, string output_file, string key)
// {
//     ifstream fin(input_file, ios::binary);
//     ofstream fout(output_file, ios::binary);
//     unsigned char iv[AES_BLOCK_SIZE];
//     memset(iv, 0x00, AES_BLOCK_SIZE);

//     AES_KEY aes_key;
//     AES_set_decrypt_key((const unsigned char *)key.c_str(), key.length() * 8, &aes_key);

//     unsigned char in_buffer[BUFFER_SIZE + AES_BLOCK_SIZE];
//     unsigned char out_buffer[BUFFER_SIZE];

//     int bytes_read, bytes_written;
//     while (true)
//     {
//         fin.read((char *)in_buffer, BUFFER_SIZE + AES_BLOCK_SIZE);
//         bytes_read = fin.gcount();

//         AES_cbc_encrypt(in_buffer, out_buffer, bytes_read, &aes_key, iv, AES_DECRYPT);

//         bytes_written = bytes_read - AES_BLOCK_SIZE;
//         fout.write((char *)out_buffer, bytes_written);

//         if (fin.eof())
//             break;
//     }

//     fin.close();
//     fout.close();
// }

// int main()
// {
//     string input_file = "input.txt";
//     string output_file = "output.txt";
//     string key = "mysecretkey";
//     encrypt_file(input_file, output_file, key);
//     decrypt_file(output_file, "decrypted.txt", key);

//     return 0;
// }

#include <iostream>
#include <fstream>

using namespace std;

void encryptFile(const char *inputFile, const char *outputFile, int key)
{
    ifstream in(inputFile, ios::binary);
    ofstream out(outputFile, ios::binary);

    if (!in)
    {
        cerr << "Error opening input file: " << inputFile << endl;
        return;
    }

    if (!out)
    {
        cerr << "Error opening output file: " << outputFile << endl;
        return;
    }

    char buffer[1024];
    while (in.read(buffer, sizeof(buffer)))
    {
        for (int i = 0; i < in.gcount(); i++)
        {
            buffer[i] = ((buffer[i] + key) % 256);
        }

        out.write(buffer, in.gcount());
    }

    int count = in.gcount();
    for (int i = 0; i < count; i++)
    {
        buffer[i] = ((buffer[i] + key) % 256);
    }

    out.write(buffer, count);

    in.close();
    out.close();
}

void decryptFile(const char *inputFile, const char *outputFile, int key)
{
    encryptFile(inputFile, outputFile, 256 - key);
}

int main()
{
    const char *inputFile = "input.txt";
    const char *encryptedFile = "encrypted.txt";
    const char *decryptedFile = "decrypted.txt";
    int key = 5;

    encryptFile(inputFile, encryptedFile, key);
    decryptFile(encryptedFile, decryptedFile, key);

    return 0;
}

