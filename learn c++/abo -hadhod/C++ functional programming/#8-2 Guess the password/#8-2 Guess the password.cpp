#include <iostream>
#include <string>
using namespace std;
string ReadPassword() {
    string password;
    cout << "Enter a password :";
    getline(cin, password);
    return password;
}
void Guesthepassword(string password) {
    string GuessedPAssword = "";
    int counter = 1;
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int k = 65; k <= 90; k++) {

                GuessedPAssword += char(i);
                GuessedPAssword += char(j);
                GuessedPAssword += char(k);
                cout << "trail number [" << counter << "] " <<GuessedPAssword<<endl;
                counter++;
                if (GuessedPAssword == password) {
                    cout << "the password is " << GuessedPAssword;
                    return ;
                }
                else GuessedPAssword = "";
            }
        }
    }
}
int main()
{
    Guesthepassword( ReadPassword());
}
