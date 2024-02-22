#include <iostream>
#include "encrypter.h"
using namespace std;
int main(){
    string filename;
    char mode;
    cout<<"Hello, This is a very simple encryption/decryption tool using cpp\n";
    cout<<"Enter the file name you want to encrypt/decrypt:\n";
    getline(cin>>ws,filename);
    cout<<"To encrypt press \"e\" and to decrypt press \"d\" ";
    cin>>mode;
    if(mode =='e' || mode =='E')
        if(encryptFile(filename,true))
            cout<<"File encrypted successfully";
        else 
            cerr<<"Error: Unable to encrypt the file.";
    
    else if(mode == 'd' || mode == 'D')
        if(encryptFile(filename,false))
            cout<<"File decrypted successfully";
        else
            cerr<<"Error: Unable to decrypt the file.";
    
    else{
        cerr<<"Invalid choice.";
        
    }



    return 0;
}