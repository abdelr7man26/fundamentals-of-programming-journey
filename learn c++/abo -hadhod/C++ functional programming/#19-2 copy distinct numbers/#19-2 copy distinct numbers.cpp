#include <iostream>
using namespace std;
void FillArray(int array[], int& length) {
	length = 10;
	array[0] = 10;
	array[1] = 10;
	array[2] = 10;
	array[3] = 50;
	array[4] = 50;
	array[5] = 70;
	array[6] = 70;
	array[7] = 70;
	array[8] = 70;
	array[9] = 90;
}
void printarray(int array[], int length) {
	for (int i = 0; i < length; i++) {
		cout << array[i] << " ";
	}
}


bool isnumberinarray(int number, int array[], int length) {
	for (int i = 0; i < length; i++) {
		if (number == array[i]) {
			return true;
		}
	}
	return false;
}
void addtoarray(int number, int arr[], int& length) {														
	length ++ ;
	arr[length-1] = number;
}
void copydistinictnumbers(int array[], int array2[], int length, int& length2) {
	for (int i = 0; i < length; i++) {
		if (!isnumberinarray(array[i], array2, length2)) {
			addtoarray(array[i], array2, length2);
		}
	}
}
int main()
{
	int arraylength = 0, array2length=0;
	int array[100], array2[100];
	FillArray(array, arraylength);
	printarray(array, arraylength);
	copydistinictnumbers(array, array2, arraylength, array2length);
	printarray(array2, array2length);
	return 0;
}

