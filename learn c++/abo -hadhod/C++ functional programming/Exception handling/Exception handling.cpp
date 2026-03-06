#include <iostream>
using namespace std;
int ReadNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}

float  DevideNumbers(int x , int y) {
    try {
        if (y == 0) {
            throw exception();
        }
        else {
            return x / y;
        }
    }
    catch (exception& E) {
        cout << E.what() << endl;
        throw;
    }
}
int main()
{
    // thats a best practise in modern cpp to  handle exceptions and dont make the float function return any random value or garbage 
    try {
        int x = ReadNumber("Enter positive number : "), y = ReadNumber("Enter positive number : ");
        cout << "x /y = " << DevideNumbers(x, y) << endl;
    }
    catch (exception& E) {
        cout << "y should be greater then 0 \n";
    }
    cout << "continued";
    return 0;
}

