#include <iostream>

using namespace std;

int main()
{
	float bill = 0.0 ,service =.10,tax=.16;
	cout << "Enter the bill : ";
	cin >> bill;
	double billAfterService =bill+ (bill * service);
	double totalBill = billAfterService +(billAfterService * tax);


	cout << "the total bill is : " << totalBill;
	return 0;

}
