#include <iostream>

using namespace std;
int main()
{
	int num1 = 0, num2 = 0, num3 = 0;
	cout << "Enter first number : ";
	cin >> num1;
	cout << "Enter secound number : ";
	cin >> num2;
	cout << "Enter third number : ";
	cin >> num3;

	cout << "The average of the numbers is " << (num1 + num2 + num3) / 3;
	return 0;
}