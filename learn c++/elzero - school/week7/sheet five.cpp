#include <iostream>
#include <limits>
using namespace std;
int main()
{
    long long int i = 1;
    bool Continue;

    for (;;)
    {
        if (i <= (numeric_limits<long long int>::max() / 10))
        {
            cout << "Enter 1 to continue or 0 to stop: ";
            cin >> Continue;
            if (Continue == true)
            {
                cout << i << endl;
                i *= 10;
            }
            else
            {
                cout << "Exiting the loop." << endl;
                break;
            }
        }
        else
        {
            cout << "Reached the maximum limit for i." << endl;
            break;
        }
    }

 
    // long long int j = 1;
    // bool skip;

    // while (true)
    // {
    //     cout << "Enter 1 to continue or 0 to stop: ";
    //     cin >> skip;

    //     if (skip == true)
    //     {
    //         cout << j << endl;

    //         // Check overflow before multiplication
    //         if (j > numeric_limits<long long int>::max() / 10)
    //         {
    //             cout << "Cannot safely multiply by 10 anymore." << endl;
    //             break;
    //         }

    //         j *= 10;
    //     }
    //     else
    //     {
    //         cout << "Exiting the loop." << endl;
    //         break;
    //     }
    // }

    return 0;
}

