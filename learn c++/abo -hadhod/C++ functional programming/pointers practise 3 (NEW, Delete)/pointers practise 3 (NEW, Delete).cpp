#include <iostream>
using namespace std;
int main()
// b3ml dynamic allocate for the memory in the heap not in the stack 
{
	// creating two pointers 
	//assign the pointers to null is a good practise 
	int* ptrx = NULL;
	float* ptry = NULL;

	// setting a location for diffrent data types variables 
	ptrx = new int;
	ptry = new float;
	// bn5zn el data d fl locations el 7gznaha 
	*ptrx = 20;
	*ptry = 2.5;

	cout << "location x:" << ptrx << "value x " << *ptrx << endl;
	cout << "location y:" << ptry << "value y " << *ptry << endl;

	// lazm b3d kol new a3ml delete 
	delete ptrx;
	delete ptry;

	// dynamic array 

	int size = 0;
	cout << "how many numbers you want to add? ";
	cin >> size;
	int* ptrNumbers = NULL;

	ptrNumbers = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "Number #" << i + 1  <<" ";
		cin >> *(ptrNumbers + i);
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << "Number #" << i + 1 <<" ";
		cout << *(ptrNumbers + i) <<endl;
	}
	//mtnsaaaaa4 el delete
	delete[] ptrNumbers;
	return 0;
}

