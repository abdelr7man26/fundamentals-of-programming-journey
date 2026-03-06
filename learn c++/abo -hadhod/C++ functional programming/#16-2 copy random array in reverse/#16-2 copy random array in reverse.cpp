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
int GenerateRandom(int from, int to) {
    int Random = rand() % (to - from + 1) + from;
    return Random;
}
void FillArray(int array[], int Length) {
    for (int i = 0; i < Length; i++) {
        array[i] = GenerateRandom(0, Length);
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
int Swap(int& a, int& b) {
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    return temp;
}
void ReverseArray(int array[], int Length) {
    
    for (int i = 0; i < Length; i++) {
        swap(array[i], array[Length - 1]);
        Length--;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int number = ReadNumber("Enter a positive number :");
    int array[100];
    FillArray(array, number);
    cout << "Array elements: " << endl;
    PrintArray(array, number);
    ReverseArray(array, number);
    cout << endl << "Reversed array : " << endl;
    PrintArray(array, number);

    return 0;
}

