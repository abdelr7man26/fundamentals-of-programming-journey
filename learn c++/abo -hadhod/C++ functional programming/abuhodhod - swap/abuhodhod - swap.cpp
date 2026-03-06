#include <iostream>
using namespace std;

int main()
{
	int num1 = 20, num2 = 30;
	//int swap = 0;
	cout << "num1 " << num1 <<endl;
	cout << "num2 " << num2 << endl;
	/*swap = num1;
	num1 = num2;
	num2 = swap;*/

	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	cout << "num1 " << num1 <<endl;
	cout << "num2 " << num2;
	return 0;
}