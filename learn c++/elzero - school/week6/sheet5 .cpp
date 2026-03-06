#include <iostream>
using namespace std;
int main()
{
    int vals1[] = {100, 200, 600, 200, 100};
    if (vals1[0] == vals1[4])
    {
        if (vals1[1] == vals1[3])
        {
            cout << " the array is Palindrome " << endl;
        }
    }
    else
    {
        cout << " the array is not Palindrome " << endl;
    }

    int vals2[] = {100, 200, 200, 100};
    if (vals2[0] == vals2[3])
    {
        if (vals2[1] == vals2[2])
        {
            cout << " the array is Palindrome " << endl;
        }
    }
    else
    {
        cout << " the array is not Palindrome " << endl;
    }

    int vals3[] = {100, 300, 600, 200, 100};
    if (vals3[0] == vals3[4])
    {
        if (vals3[1] == vals3[3])
        {
            cout << " the array is Palindrome " << endl;
        }
        else
        {
            cout << " the array is not Palindrome " << endl;
        }
    }
    else
    {
        cout << " the array is not Palindrome " << endl;
    }

    return 0;
}