#include <iostream>
using namespace std; 

int test (int num1 , int num2 )
{
    int check = num1 ;
    if ( num2 == check )
    {
        return num1 + num2;
    }
    else if ( check > num2 )
    {
        return num1 - num2;
    }
    else
    {
        return num2 - num1;
    }
}
int main ()
{
    int num1 , num2 ;
    cout << "Enter two numbers " <<endl;
    cin >> num1 >> num2;
    int result = test(num1, num2);
    cout << "Result: " << result << endl;
    return 0;
}