#include <iostream>
#include <string>
using namespace std;

int ReadNumber() {
	int number;
	do {
		cout << "Enter a positive number : ";
		cin >> number;
		if (number > 0)
		{
			return number;
		}
	} while (number <= 0);
}
//string IntTOString(int number) {
//	string strnumber = to_string(number);
//
//	return strnumber ;
//}
//string RevearseNumber(string str) {
//	string Reversed;
//	for (int i = str.length() - 1; i >= 0; i--)
//	{
//		Reversed+=str[i];
//	}
//	
//	return Reversed;
//}
//void printReversednumber(string reversednumber) {
//
//	for (int i = 0; i < reversednumber.length(); i++) {
//		cout << reversednumber[i] << endl;
//}
//}

int Sumofdigits(int number) {
	int reminder;
	int sum = 0;
	while (number != 0) {
		reminder = number % 10;
		number /= 10;
		sum+=reminder;
		
	}
	return sum ;
}
int main() {
	cout<<Sumofdigits(ReadNumber());
	return 0;
}