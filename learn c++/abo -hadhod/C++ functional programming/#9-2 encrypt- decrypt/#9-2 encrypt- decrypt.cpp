#include <iostream>
#include <string>
using namespace std;

string ReadPassword() {
    string password;
    cout << "Enter your password .";
    cin >> password;
    return password;
}
string EncryptText(string Text, short EncryptionKey)
{
  
    for (int i = 0; i <= Text.length(); i++)
    {
        
        Text[i] = char((int)Text[i] + EncryptionKey);
    }
    return Text; 
}

string DecryptText(string Text, short EncryptionKey)
{
  
    for (int i = 0; i <= Text.length(); i++)
    {
       
        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    return Text; 
}


int main()
{
    const short EncryptionKey = 2; 

    string TextAfterEncryption, TextAfterDecryption;  

    
    string Text = ReadPassword();

   
    TextAfterEncryption = EncryptText(Text, EncryptionKey);

    
    TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

   
    cout << "\nText Before Encryption : " << Text << endl;
   
    cout << "Text After Encryption  : " << TextAfterEncryption << endl;
    
    cout << "Text After Decryption  : " << TextAfterDecryption << endl;

    return 0; 
}
