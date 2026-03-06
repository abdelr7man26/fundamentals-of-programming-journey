#include <iostream>
#include <math.h>
using namespace std;

int ABS(int number) {
	if (number > 0) {
		return number;
	}
	else return -number;
}
int main() {
	int number = 12;
	int number2 = -12;
	cout << "My abs " << endl;
	cout <<ABS(number)<<endl;
	cout << ABS(number2)<<endl;
	cout << "cpp abs"<<endl;
	cout << abs(number)<<endl;
	cout << abs(number2);
}