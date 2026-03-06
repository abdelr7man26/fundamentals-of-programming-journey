#include <iostream>
using namespace std;

int ReadNumber() {
	int number = 0;
	do {
		cout << "Enter a positive number :";
			cin >> number;
	} while (number < 0);
	return number;
}
int GenerateRandomNumber(int from , int to) {
	int Random = rand() % (to - from + 1) + from;
	return Random;
}
void FillArray(int array[], int length )
{
	for (int i = 0; i < length; i++) {
		array[i] = GenerateRandomNumber(1,100);
	}
}
void PrintArray(int Array[],int length) {
	for (int i = 0; i < length; i++) {
		cout << Array[i];
		if (i < length-1) {
			cout << " , ";
		}
	}
}

bool IsOddNumber(int number) {
	if (number % 2 == 0) {
		return false;
	}
	return true;
}
void AddTOArray(int number, int destenetionarray[], int& destenetionlength) {
	destenetionlength++;
	destenetionarray[destenetionlength - 1] = number;
}
int FindOdd(int sourcearray[], int destentionarray[], int sourcelength, int &destenetionlength) {
	for (int i = 0; i < sourcelength; i++) {
		if (IsOddNumber(sourcearray[i])) {

			AddTOArray(sourcearray[i], destentionarray, destenetionlength);
		}
	}

	return destenetionlength;
}


int main()
{
	srand((unsigned)time(NULL));
	int array[100],array2[100],number2=0, number = ReadNumber();
	FillArray(array, number);
	cout << "first array: "<<endl;
	PrintArray(array, number);
	cout <<endl<< "Odds array : "<<endl;
	FindOdd(array,array2,number,number2);
	PrintArray(array2, number2);
	cout << endl;
	cout << "number of odd numbers : "<< FindOdd(array, array2, number, number2);
	return 0;
}


