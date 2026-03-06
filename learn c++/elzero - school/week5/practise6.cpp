#include <iostream>
using namespace std;
int main()
{
    int num1 , num2;
    char Operator;
    cout <<" enter two numbers :";
    cin >> num1 >> num2;
    cout << "enter the operator from ( + , * , - , / )";
    cin >> Operator;
    switch (Operator)
    {
    case '+':
        cout << " the result is " << (num1 + num2); break;
    case '-':
        cout << " the result is " << (num1 - num2); break;

    case '*':
        cout << " the result is " << (num1 * num2); break;
    case '/':
        cout << " the result is " << (num1 / num2); break;
    default:
        cout << " enter a valid operator ";
    }
}