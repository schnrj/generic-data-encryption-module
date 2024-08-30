#include <iostream>
#include <cassert>
#include "encryption_module.h"

using namespace std;

void testEncryptionModule() {
    EncryptionModule encryption;

    // Sample data
    string plaintext = "This is a secret message.";
    string key = "my_secret_key"; // Dummy key for testing
    string iv = "initialization_vector"; // Dummy IV for testing

    // Test encryption
    string encrypted = encryption.encrypt(plaintext, key, iv);
    string expected_encrypted = string(plaintext.rbegin(), plaintext.rend()); // Reversed plaintext
    assert(encrypted == expected_encrypted);
    cout << "Encryption test passed!" << endl;

    // Test decryption
    string decrypted = encryption.decrypt(encrypted, key, iv);
    assert(decrypted == plaintext);
    cout << "Decryption test passed!" << endl;
}

int main() {
    testEncryptionModule();
    return 0;
}
