#include "encrypter.h"



bool performCeaserCipher(string &content,bool encrypt){
    int shift = encrypt ? 3: -3;
    for(char &s : content){
    if(isalpha(s)){
        char base = isupper(s) ? 'A' : 'a';
        s = static_cast<char>((s - base + shift + 26) % 26 + base);
    }
    }
    return true;
}

bool encryptFile(const string &filename, bool encrypt){
    ifstream inFile(filename);
    if(!inFile)
        return false;
    string content((istreambuf_iterator<char>(inFile)), {}); 
    inFile.close();
    if(performCeaserCipher(content,encrypt)){
        ofstream outFile(encrypt? "encrypted_" + filename : "decrypted" + filename);
        if(!outFile){
            return false;
        }
        outFile << content;
        outFile.close();
        return true;
    }
    return false;

}

