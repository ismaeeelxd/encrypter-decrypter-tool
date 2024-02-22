#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <string>
#include <fstream>
#include <cctype>

using namespace std;

bool encryptFile(const string &filename, bool encrypt);
bool performCeaserCipher(string &content, bool encrypt);

#endif 
