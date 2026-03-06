#include <iostream>
using namespace std;

int GenerateRandomNumber() {
	int Random = rand() % 101;
	return Random;
}
void ReadArray(int array[100])
{
	for (int i = 0; i < 100; i++) {
		array[i] = GenerateRandomNumber();
	}
}
void PrintArray(int Array[100]) {
	for (int i = 0; i < 100; i++) {
		cout << Array[i];
		if (i < 99) {
			cout << " , ";
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int array[100];
	ReadArray(array);
	PrintArray(array);
	return 0;
}

