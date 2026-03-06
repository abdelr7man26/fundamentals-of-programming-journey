#include <iostream>
using namespace std;
enum enRandType { SmallLetter = 0, CapitalLetter, SpecialChar, Digit };
int GenerateRandom(int from, int to) {
    int number = rand() % (to - from + 1) + from;
    return number;
}
char RandomChar(enRandType Type) {
    switch (Type) {
    case SmallLetter:
        return char(GenerateRandom(97, 122));
        break;
    case CapitalLetter:
        return char(GenerateRandom(65, 90));
        break;
    case SpecialChar:
        return char(GenerateRandom(33, 47));
        break;
    case Digit :
        return char(GenerateRandom(48, 57));
        break;
    }
    return '\0';
}
string RandomWord() {
    string str = "";
    for (int i = 0; i < 4; i++) {
        str += RandomChar(CapitalLetter);
    }
    return str;
}
string RandomKey() {
    string str = "";
    for (int i = 0; i < 4; i++) {
        str += RandomWord();
        if (i < 3) {
            str += "-";
        }
    }
    return str;
}
void fillarray(string array[], int Length) {
    for (int i = 0; i < Length; i++) {
        array[i] = RandomKey();
    }
}
void print(string array[],int Length) {
    for (int i = 0; i < Length; i++) {
        cout << array[i] << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    string array[100];
    fillarray(array, 50);
    print(array,50);
    return 0; 
}