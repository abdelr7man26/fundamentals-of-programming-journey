#include <iostream>

using namespace std;
int Readnumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}
void NumbersPattern(int number) {
    for (int i = number; i >= 1; i--) {   
        for (int j = 0; j < i; j++) {  
            cout << i;
        }
        cout << endl;
    }

}
int main()
{
    NumbersPattern(Readnumber("Enter a positive number "));
}

