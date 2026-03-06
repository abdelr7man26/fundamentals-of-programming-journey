#include <iostream>
using namespace std;
int main()
{
    // for loop basic syntax

    /*for (init ; condition ; steps)
    {
    block of code
    }*/

    for (int i = 1; i < 101; i++)
    // this condition will print any inside code 100 times
    {
        cout << i << "- hello world11111111" << endl;
    }


    // FOR LOOP ADVANCED SYNTAX
    int j = 1;
    for (;;)

    // 5le balk mn ;; lazm yfdlo gowa 
    {
        cout << j << "- hello world" << endl;
        j++;
        if (j > 100) // this condition will break the loop after printing 100 times
        {
            break;
        }
    }
    return 0;
}