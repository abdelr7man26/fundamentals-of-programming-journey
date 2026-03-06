#include <iostream>
#include <math.h>
using namespace std;
int ROUND(float number) { 
	float fractionnumber = number - int(number);
	if (abs(fractionnumber) >= .5) {
		if (number > 0) {
			return int(number) + 1;
		}
		else return int(number) - 1;

	}
	else return (int)number;
}
int main() {
	float number = 2.4;
	float number2= -2.7;
	float number3= 2.5;
	cout << "my round " << endl;
	cout << ROUND(number ) << endl;
	cout << ROUND(number2) << endl;
	cout << ROUND(number3) << endl;
	cout << "cpp round " << endl;
	cout << round(number )<< endl;
	cout << round(number2)<< endl;
	cout << round(number3) << endl;

}
