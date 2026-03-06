#include <iostream>
#include <string>
using namespace std;
int main() {
	int num = 20;
	string str;
	str = to_string(num);
	cout << str;

	string str1 = "102.65";
	double num1;
	num1 = stod(str1);
	cout << num1;

	string str2 = "102";
	int num2;
	num2 = stoi(str2);
	cout << num2;

	string str3 = "102.65";
	float num3;
	num3 = stof(str3);
	cout << num3;

	float num4 = 20.5;
	string str4;
	str = to_string(num4);
	cout << str4;

	float num5 = 20.5;
	int num6;
	num6 = int(num5);
	cout << num6;

	return 0;
}