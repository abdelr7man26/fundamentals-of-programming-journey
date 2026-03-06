#include <iostream>
#include <array>
using namespace std;

int ReadNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}

void AddElementsToArray(int numbers[100],int Arraylength) {
    
    for (int i = 0; i < Arraylength; i++) {
        numbers[i] = ReadNumber("Enter an alement for the array");
    }
}
void PrintArrayElements(int numbers[100], int ArrayLength) {
    for (int i = 0; i < ArrayLength; i++) {
        cout << numbers[i];
        if (i < ArrayLength - 1) {
            cout << " , ";
        }

    }
}

int TimeRepeats(int numbers[100], int ArrayLength) {
    int count = 0;
    cout << endl;
    int number = ReadNumber("Enter the number you want to check");
    for (int i = 0; i < ArrayLength; i++) {
        if (number == numbers[i]) {
            count++;
        }
      
    }
    return count;
}
int main()
{
    int number =ReadNumber("enter the size of the array ");
    int arr[100];
    AddElementsToArray(arr,number);
    PrintArrayElements(arr,number);
    cout <<TimeRepeats(arr, number);
    return 0;
}
