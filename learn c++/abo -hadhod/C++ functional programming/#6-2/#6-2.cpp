#include <iostream>
#include <string>
using namespace std;
enum enPalindrome { notpalindrome = 0, palindrome = 1 };
int ReadNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;

    } while (number < 0);

    return number;
}

int Reversenumber(int number) {

    int reminder = 0;
    int ReversedNumber = 0;

    while (number > 0) {
        reminder = number % 10;
        number /= 10;
        ReversedNumber = ReversedNumber * 10 + reminder;
    }
    return ReversedNumber;
}
enPalindrome PalimdromeOrNot(int number) {

    if (Reversenumber(number) == number) {
        return palindrome;
    }
    else return notpalindrome;

}
void PrintResult(int number) {
    switch (PalimdromeOrNot(number)) {
    case palindrome :
        cout << number << " is palindrome." << endl;
        break;
    case notpalindrome:
        cout << number << " is not palindrome ." << endl;

    }
}

int main()
{
    PrintResult(ReadNumber("Enter a positive number"));
}

