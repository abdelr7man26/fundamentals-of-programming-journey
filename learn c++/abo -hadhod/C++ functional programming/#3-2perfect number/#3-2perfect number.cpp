#include <iostream>
using namespace std;

enum enPerfect { notperfect = 0, perfect = 1 };
void ReadNumber(int &number) {
	
	do {
		cout << "Enter a positive number : ";
		cin >> number;
		if (number > 0)
		{
			break;
		}
	}while (number <= 0);
}
enPerfect CheckIfPerfect(int number) {
	int sum = 0;
	for (int i = 1; i < number; i++) {
		if (number % i == 0) {
			sum += i;
			
		}
		
	}if (sum == number) {
		return perfect;
	}
	else return notperfect;
}
void PrintPerfectorNot(int number) {
	for (int i = 1; i <= number; i++) {
		if (CheckIfPerfect(i) == perfect)
		{
			cout << i << " Is a perfect number." <<endl;
		}
		/*else {
			cout << i << " Is not perfect number."<<endl;
		}*/
	}
}
int main(){
	int number;
	ReadNumber(number);
	PrintPerfectorNot(number);

	return 0;
}