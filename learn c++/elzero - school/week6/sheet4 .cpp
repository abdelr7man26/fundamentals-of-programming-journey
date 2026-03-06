#include <iostream>
using namespace std;
int main()
{
    int vals[]{100, 200, 500, 400, 200};
    int size = sizeof(vals) / sizeof(vals[0]);
    int mid = (size / 2);
    if (vals[0] + vals[size - 1] > vals[mid])
    {
        cout << vals[0] << "+" << vals[size - 1] << "=" << vals[0] + vals[size - 1] << endl;
        cout << " the first number + the last number is greater than the mid number " << endl;
        cout << vals[0] + vals[size - 1] << ">" << vals[mid] << endl;
    }
    else if ( vals [1] + vals [ size -2] > vals [mid] )
    {
         cout << vals[1] << "+" << vals[size - 2] << "=" << vals[1] + vals[size - 2] << endl;
        cout << " the second number + the before last number is greater than the mid number " << endl;
        cout << vals[1] + vals[size - 2] << ">" << vals[mid] << endl;
    }
    else { cout << " middle number is the largest ";
    
        cout << vals[mid];
    }
    return 0;
}