#include <iostream>
#include <string>

using namespace std;
enum enRandValue { CapitalLetter = 0, SmallLetter = 1, SpecialCharacter = 2, Digit = 3 };

int Readnumber(string message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number < 0);
    return number;
}

int RandomGenerator(int from , int to) {
    int RandValue = rand() % (to - from + 1) + from;
    return RandValue;
}

char RandomGeneratorValues(enRandValue Value){
    switch (Value) {
        case CapitalLetter:
            return char(RandomGenerator(65,90));
            break;
        case SmallLetter:
            return char(RandomGenerator(97, 122));
            break;
        case SpecialCharacter:
            return char(RandomGenerator(33, 47));
            break;
        case Digit:
            return char(RandomGenerator(48, 57));
            break;
    }
    return '\0';

}

string GenerateWord() {
    string word = "";
    for (int i = 0; i < 4; i++)
    {
        word += RandomGeneratorValues(CapitalLetter);
    }
    return word;
}

void GenerateRandomKeys(int number) {
  
    for (int i = 0; i < number; i++) {
        string Key = "";
        for (int j = 0; j < 4; j++) {
            Key += GenerateWord();
            if (j < 3) {
                Key += "-";
               
            }
        }
        cout << "key [" << i + 1 << "] : " << Key << endl;;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    GenerateRandomKeys(Readnumber("Enter a positive number : "));
   
}


