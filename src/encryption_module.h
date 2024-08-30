#ifndef ENCRYPTION_MODULE_H
#define ENCRYPTION_MODULE_H

#include <string>

class EncryptionModule {
public:
    // Encrypts the given plaintext using the provided key and IV
    string encrypt(const std::string& plaintext, const std::string& key, const std::string& iv);
    
    // Decrypts the given ciphertext using the provided key and IV
    string decrypt(const std::string& ciphertext, const std::string& key, const std::string& iv);
};

#endif // ENCRYPTION_MODULE_H
