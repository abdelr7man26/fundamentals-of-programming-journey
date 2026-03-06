#include <iostream>
using namespace std;

float powerr(float base, int power);
int main()
{
    float base, power;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> power;
    cout << "Result: " << powerr(base, power) << "\n"; // Output the result

    return 0;
}
float powerr(float base, int power)
{
    //momkn nst5dm recuursion hena bs ana me7a


    
    float result = 1;
    if (power == 0)
    {
        return 1;
    }

    if (power == 1)
    {
        return base;
    }

    if (power > 0)
    {
        for (int i = 0; i < power; i++)
        {
            result *= base;
        }
    }

     if (power < 0)
     {
        result = 1.0 / powerr(base, -power);
     }


    //     for (int j = 0; j < -power; j++)
    //     {
    //         result *= base;
    //     }
    //     result = 1 / result;
    // }
    return result;
}