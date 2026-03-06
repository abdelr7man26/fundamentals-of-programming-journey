#include <iostream>
using namespace std;
int main ()
{
    int index = 2;
    for (;;)
    {
        if (index  < 9)
        {
            cout << index << endl;
           index++;
        }
        else
        {
            break;
        }
    }
    return 0;
}