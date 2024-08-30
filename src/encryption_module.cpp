#include "encryption_module.h"
#include <algorithm> // For std::reverse (dummy encryption method)

using namespace std;

string EncryptionModule::encrypt(const string& plaintext, const string& key, const string& iv) {
    // Dummy encryption: reverse the plaintext
    string encrypted = plaintext;
    reverse(encrypted.begin(), encrypted.end());
    return encrypted;
}

string EncryptionModule::decrypt(const string& ciphertext, const string& key, const string& iv) {
    // Dummy decryption: reverse the ciphertext
    string decrypted = ciphertext;
    reverse(decrypted.begin(), decrypted.end());
    return decrypted;
}
