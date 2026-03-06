#include <iostream>

using namespace std;

int ReadNumber(string message) {
    int number = 0; 
    do {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}

void FillArray(int array[], int Length) {
    for (int i = 0; i < Length; i++) {
        array[i] = i + 1;
    }
}

void PrintArray(int array[], int Length) {
    
    for (int i = 0; i < Length; i++) {
        cout << array[i];
        if (i < Length - 1) {
            cout << " , ";
        }
    }
}
int GenerateRandom(int from, int to) {
    int RandomNumber = rand() % (to - from + 1) + from;
    return RandomNumber;
}
int Swap(int& a, int& b) {
    int temp=0;

    temp = a;
    a = b;
    b = temp;
    return temp;
}
void ShuffleArray(int array[],int number) {
   
    for (int i = 0; i < number; i++) { 
        Swap(array[GenerateRandom(1, number) - 1], array[GenerateRandom(1, number) - 1]);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int number = ReadNumber("Enter the number of elemnts you want to add to the array : ");
    int array[100];
    FillArray(array, number);
    cout << "Array elements : " << endl;
        PrintArray(array, number);
    cout << endl << "Array After shuffled : " << endl;
    ShuffleArray(array,number);
    PrintArray(array, number);
    return 0;
}

