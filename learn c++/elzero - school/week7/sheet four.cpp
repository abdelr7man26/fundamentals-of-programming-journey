#include <iostream>
using namespace std;
int main ()
{
    for (int i = 0 ; i < 20 ; i+=2)
    {
        cout <<i ;
        if (i < 18)
        {
            cout << ",";
        }
    }
    cout << endl;
    int j =0;

    while (j < 20)
    {
        cout << j; 
        if (j < 18)
        {
            cout << ",";
        }
        j += 2;
    }
    return 0;
}