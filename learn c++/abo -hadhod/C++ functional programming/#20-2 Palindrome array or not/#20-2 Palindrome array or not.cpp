#include <iostream>
using namespace std;
enum enPalind { notpalindrome = 0, palindrome = 1 };
void FillArray(int arr[100], int& arrLength)
{
    arrLength = 6; 

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}
void PrintArray(int arr[100], int arrLength)
{
    
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";  
}

enPalind palindromeornot(int array[], int length) {
    for (int i = 0; i < length; i++)
    {
        if (array[i] != array[length - 1])
            return notpalindrome;
        length--;
    }
    return palindrome;
}

void print(enPalind palindromeornot)
{
    switch (palindromeornot) {
    case palindrome:
        cout << "array is palindrome " << endl;
        break;
    case notpalindrome:
        cout << "array is not palindrome " << endl;
        break;
    }
}
int main()
{
    int array[100] , length=0;
    FillArray(array, length);
    print(palindromeornot(array, length));
    return 0;
}

