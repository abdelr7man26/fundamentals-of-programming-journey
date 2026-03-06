#include <iostream>
#include<iomanip>
#include "matrices.h"
using namespace std;

int main()
{
	int array1[3][3], array2[3][3] = { {0,0,0},
									   {0,0,0},
									   {0,0,45} };
	fillorderedmatrix(array1,1);
	
	cout << right << setw(30) << "array 1 :" << endl;
	PrintArray(array1);
	cout << right << setw(30) << "array 2 :" << endl;
	PrintArray(array2);
	cout << endl;
	if (sumofthematrix(array1) == sumofthematrix(array2)) {
		cout << " the matrices are equal.\n";
	}
	else cout << "the matrices are not equal.\n";

	return 0;
}