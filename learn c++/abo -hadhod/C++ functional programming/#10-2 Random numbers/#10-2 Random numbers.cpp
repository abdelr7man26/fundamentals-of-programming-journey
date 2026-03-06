#include <iostream>  

using namespace std; 

enum enCharType{ SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum; 
}

void GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case SamallLetter:
        cout << char(RandomNumber(97, 122)) << endl;
        break;
    case CapitalLetter:
        cout << char(RandomNumber(65, 90)) << endl;
        break;
    case SpecialCharacter:
        cout << char(RandomNumber(33, 47)) << endl;
        break;
    case Digit:
        cout << char(RandomNumber(48, 57)) << endl;
        break;
    }
}

int main() {
  
    srand((unsigned)time(NULL));

    GetRandomCharacter(SamallLetter) ;     
    GetRandomCharacter(CapitalLetter) ;    
    GetRandomCharacter(SpecialCharacter) ;  
    GetRandomCharacter(Digit) ;

    return 0;  
}

