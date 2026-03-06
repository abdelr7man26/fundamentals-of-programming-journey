#include <iostream>
using namespace std;
int main()
{
    int nums[] = {1, 2, 3, 4, 5, -1, -2, -3, -4, -5};
    int sum = 0;
    int numsSize = std ::size(nums);
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 2 == 0 && nums[i] > 0)
        {
            cout << nums[i] << endl;
            sum += nums[i];
        }
    }
    cout << "Current sum: " << sum << endl;

    int guessed_nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num = 8;
    int guessed;
    cout << "Guess a number between 1 : 10: " << endl;
    int tries = 0;
    // while loop will be better for this case
    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> guessed;
    //     if (guessed == num)
    //     {
    //         cout << "You guessed it right!" << endl;
    //         break;
    //     }
    //     else
    //     {
    //         if (i < 2)
    //         {
    //             cout << "Wrong guess! please try again: " << endl;
    //         }
    //         else
    //         {    cout << "hard luck the correct number is : " << num << endl;}
    //     }
    // }

    // Using while be better as in future we can change the number of tries without changing the code logic

    while (true)
    {
        cin >> guessed;
        if (guessed == num)
        {
            cout << "You guessed it right!" << endl;
            break;
        }
        else
        {
            tries++;
            if (tries < 3)
            {
                cout << "Wrong guess! please try again: " << endl;
            }
            else
            {
                cout << "hard luck the correct number is : " << num << endl;
                break;
            }
        }
    }



    int vals[5];
    int counter= 0;
    for (int i = 4 ; i > -1; i--)
    {
        counter++;
        cout << "Enter value " << counter << ": ";
        cin >> vals[i];
    }
    cout << "{"<<vals[0] << " ," << vals[1] << " ," << vals[2] << " ," << vals[3] << " ," << vals[4] << "}" << endl;

    return 0;
}