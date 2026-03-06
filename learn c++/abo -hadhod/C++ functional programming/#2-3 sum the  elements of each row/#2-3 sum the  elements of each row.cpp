#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void FillArray(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = RandomNumber(1, 50);
        }
    }
}

void PrintArray(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << left << setw(5) << array[i][j];
        }
        cout << endl;
    }
}

int sumofrow(int array[3][3], int row) {
    int sum = 0;;
    for (int j = 0; j < 3; j++) {
        sum += array[row][j];
    }
    return sum;
}
int sumofcolumn(int array[3][3], int col) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += array[i][col];
    }
    return sum;
}

void printthesumofrow(int array[3][3] , int rowsarray[]) {
    for (int i = 0; i < 3; i++) {
        rowsarray[i] = sumofrow(array, i);
        cout << "sum of " << i + 1 << " row :" << rowsarray[i] << endl;

    }
}
void printthesumofcol(int array[3][3], int colarray[]) {
    for (int j = 0; j < 3; j++) {
        colarray[j] = sumofcolumn(array, j);
        cout << "sum of " << j + 1 << " row :" << colarray[j] << endl;

    }
}

int main()
{
    srand((unsigned)time(NULL));
    int array[3][3];
    FillArray(array);
    cout << "thats a 3x3 MAtrix : \n";
    PrintArray(array);
    int rowsarray[3];
    printthesumofrow(array, rowsarray);
    cout << endl;
    int colarray[3];
    printthesumofcol(array, colarray);


    return 0;
}
