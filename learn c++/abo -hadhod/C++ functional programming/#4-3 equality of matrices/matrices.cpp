#include <iostream>
#include <iomanip>
#include "matrices.h";
using namespace std;

int RandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void FillArraywithrandom(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = RandomNumber(1, 50);
        }
    }
}
void fillorderedmatrix(int array[3][3], int from) {
    int counter = from;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = counter;
            counter++;
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
int sumofthematrix(int array[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum+=array[i][j];
        }
    }
    return sum;
}

void printthesumofrows(int array[3][3], int rowsarray[]) {
    for (int i = 0; i < 3; i++) {
        rowsarray[i] = sumofrow(array, i);
        cout << "sum of " << i + 1 << " row :" << rowsarray[i] << endl;

    }
}
void printthesumofcols(int array[3][3], int colarray[]) {
    for (int j = 0; j < 3; j++) {
        colarray[j] = sumofcolumn(array, j);
        cout << "sum of " << j + 1 << " row :" << colarray[j] << endl;

    }
}


