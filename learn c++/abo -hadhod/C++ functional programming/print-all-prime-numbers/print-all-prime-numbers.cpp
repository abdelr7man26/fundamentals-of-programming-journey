#include<iostream>
using namespace std;

enum enPrime { notprime = 0, prime = 1 };

void Readnumber(int &number) {
    do {
        cout << "enter a positive number : ";
        cin >> number;
        if (number > 0) {
            break;
        }
     
    } while (number <= 0);

}
enPrime CheckingPrime(int number) {
    int M = round(number / 2);
    if (number <= 1)
        return notprime;

    for (int i = 2; i <= M; i++) {
        if (number % i == 0)
            return notprime;
    }

    return prime;
}
void printPrimes(int number) {
        for (int i = 1; i <= number; i++) {
        if (CheckingPrime(i) == prime) {
            cout << i << " ";
        }
    }
		cout << endl;
}

int main()
{
	int number = 0;
	Readnumber(number);
	cout << "the prime numbers between 1 and " << number << " are : " << endl;
	printPrimes(number);

    return 0;
}

