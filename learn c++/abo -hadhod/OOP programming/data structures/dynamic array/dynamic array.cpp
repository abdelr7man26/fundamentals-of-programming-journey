#include <iostream>
#include "clsDynamicArray.h"
using namespace std;

int main()
{
	DynamicArray<int> dynamicArray(5);
	dynamicArray[0] = 10;
	dynamicArray[1] = 20;
	dynamicArray[2] = 30;
	dynamicArray[3] = 40;
	dynamicArray[4] = 50;
	
	cout << "isempty : " << dynamicArray.isEmpty() << endl;
	cout << "array size: " << dynamicArray.size() << endl;
	cout << "items:\n ";
	dynamicArray.print();

	dynamicArray.deleteItem(3);
	cout << "items:\n ";
	dynamicArray.print();
	cout << "\narray size: " << dynamicArray.size() << endl;

	cout << "50 in index :"<<dynamicArray.find(50);

}

