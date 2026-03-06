#include <iostream>
using namespace std;
double calc(double num1, double num2, char op)
{
    switch (op)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;

    case '*':
        return num1 * num2;

    case '/':
        return num1 / num2;

    case '%':
        return static_cast<int>(num1) % static_cast<int>(num2); // Ensure integer division for modulus if we want to use double values we can use the fmod() function    
    default:
        cout << "Invalid operation!" << endl;
        return 0;
    }
}
int main()
{
    double num1, num2; //arguments
    char op;           //argument 

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    while (num2 == 0 && op == '/') //Validate inputs in main(), and only call calc() if things are okay
    {
        cout << "Error: Division by zero!" << endl;
        cout << "Enter a valid (non-zero) number: ";
        cin >> num2;
    }

    cout << "Result: " << calc(num1, num2, op) << endl;
 
    return 0;
}