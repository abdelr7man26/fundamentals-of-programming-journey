#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "enter two numbers : " << endl;
    cin >> num1 >> num2;
    if (num1 < num2)
    {
        num1++;
        for (num1; num1 < num2; num1++)
        {
            if (num1 % 2 != 0)
            {
                cout << num1;
                if (num1 < (num2 - 1))
                {
                    cout << ",";
                    
                }
            }
        }
    }
    else
    {
        num2++;
        for (num2; num2 < num1; num2++)
        {
            if (num2 % 2 != 0)
            {
                cout << num2;
                if (num2 < (num1 - 1))
                {
                    cout << ",";
        
                }
            }
        }
    }
    return 0;
}
