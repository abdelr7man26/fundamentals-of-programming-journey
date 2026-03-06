#include <iostream>
#include <string>
using namespace std;

enum enNumberType { odd=1, even };

int Readnumber() {
    int number;
	cout << "Enter a number: ";
	cin >> number;
	return number;
}
enNumberType CheckOddEven(const int number) {
	if (number % 2 == 0)
		return even;
	else
		return odd;
}
void PrintNumberType(enNumberType type) {
	if (type == even)
		cout << "The number is even." << endl;
	else
		cout << "The number is odd." << endl;
}

int main()
{
	PrintNumberType(CheckOddEven(Readnumber()));
}
