#include <iostream>
using namespace std;

int main ()
{
    int number;
    cout << "Enter a number in kilobytes : ";
    cin >> number ;
    
    cout << "The number of kilobytes : "<< number <<endl;

    cout << "The number of bytes : "<< number * 1024 <<endl;
    number *= 1024;

    cout << "The number of bits : "<<number * 8 <<endl;

    return 0;
}