#include <iostream>
using namespace std;
int main()
{
    double x, y;
    char op;
    cout << "enter the first number : ";
    cin >> x;
    cout << "enter the operator (+ ,- , / , * ) : ";
    cin >> op;
    cout << "enter the second number : ";
    cin >> y;
    if (op == '+') { cout << x + y; }
    else if (op == '-') { cout << x - y; }
    else if (op == '*') { cout << x * y; }
    else if (op == '/') { cout << x / y; }
    else {cout << "enter a valid operation";}

    return 0;
}
