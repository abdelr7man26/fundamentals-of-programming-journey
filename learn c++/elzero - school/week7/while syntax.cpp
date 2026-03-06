#include <iostream>
using namespace std;
int main ()
{
    //syntax of while loop

    int i = 1 ; // initialization
    while (i < 6) //  condition 
    {
        cout <<i <<" - Hello World " <<endl; // body of the loop
        i++; // increment
    } 

    // do while loop syntax 
    int j = 0 ; 
    do 
    {
        cout << j << endl;
        j++; // increment
    }while (j < 0 );
    return 0;
}