#include <iostream>
using namespace std;
int main()
{
    int ASCII;
    cout << "Enter a ASCII code : ";
    cin>> ASCII;
    cout <<"The value of the code is : " << char(ASCII) <<endl;

    char CHAR;
    cout  << "Enter a char : ";
    cin >> CHAR ;
    cout << "The ASCII value is : " << int(CHAR) <<endl; 

    return 0;
}