#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void FillArray(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = RandomNumber(1,50);
        }
    }
}

void PrintArray(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << left<<setw(5) << array[i][j];
        }
        cout << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int array[3][3];
    FillArray(array);
    cout << "thats a 3x3 MAtrix : \n";
    PrintArray(array);
    return 0;
}
