#include <iostream>
#include <iomanip>
using namespace std;

void fillorderedmatrix(int array[3][3], int from) {
    int counter = from;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = counter;
            counter++;
        }
    }
}

void printmatrix(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout <<left <<setw(8) << array[i][j];
        }
        cout << endl;
    }
}
bool checktypicality(int array1[3][3], int array2[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            if (array1[i][j] != array2[i][j]) return false;
        } 
    }
    return true;
}
int main()
{
    int array1[3][3] , array2[3][3];
    fillorderedmatrix(array1, 12);
    cout << setw(30) << "array 1 : " << endl;
    printmatrix(array1);
    fillorderedmatrix(array2, 2);
   
    cout << right << setw(30) << "array 2 : " << endl;
    printmatrix(array2);
    cout << endl;
    cout << boolalpha;
    cout << "is the two matrices are equal? " << checkequality(array1, array2) << endl;
    return 0;
}
