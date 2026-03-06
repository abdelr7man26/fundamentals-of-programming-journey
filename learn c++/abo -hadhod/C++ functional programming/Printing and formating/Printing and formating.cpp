#include <iostream>
#include <cstdio>
#include<iomanip>

using namespace std;

int main()
{
    cout << right << setw(8) << "Name" << right << setw(3) << "|" << right << setw(8) << "Age" << right << setw(3) << "|" << right << setw(8) << "Salary" << endl;
    cout << setfill('-') << setw(35) << "" << endl;
    cout << right << setfill(' ')<<setw(8) << "Ahmed" << right << setw(3) << "|" << right << setw(8) << "22" << right << setw(3) << "|" << setfill('0') << setw(8) << "" << endl;
    cout << setfill('-') << setw(35) << "" << endl;
    printf("%8s%3c%8s%3c%8s\n", "Name",'|', "Age",'|', "Salary");
    cout << setfill('-') << setw(35) << "" << endl;
    printf("%8s%3c%8s%3c%8s\n", "Ahmed", '|', "22", '|', "00000000");

    int array[2][3];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = (i + 1) * (j + 1);
            
        }
    }
    cout << setfill('-') << setw(35) << "" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            
            printf("%8d", array[i][j]);
            if (j < 2) printf("%3c", '|'); 
            
        }
       
        cout << endl << setfill('-') << setw(35) << "" << endl;
    }
    return 0;
}


