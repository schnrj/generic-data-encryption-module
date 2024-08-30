#include <iostream>
#include <string>
#include "encryption_module.h"

using namespace std;

int main() {
    // Sample data
    string plaintext = "This is a secret message.";
    string key = "my_secret_key"; // Replace with actual key
    string iv = "initialization_vector"; // Replace with actual IV
    
    // Create an instance of the encryption class
    EncryptionModule encryption;

    // Encrypt the data
    string ciphertext = encryption.encrypt(plaintext, key, iv);
    cout << "Encrypted: " << ciphertext << endl;

    // Decrypt the data
    string decrypted = encryption.decrypt(ciphertext, key, iv);
    cout << "Decrypted: " << decrypted << endl;

    return 0;
}
