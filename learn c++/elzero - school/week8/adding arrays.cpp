#include <iostream>
using namespace std;

void max_num(int nums[], int size)
{
        int max = nums[0];
        for (int i = 1; i < size; i++)
        {
            if (nums[i] > max)
            {
                max = nums[i];
            }
        }
        cout << "The largest number is: " << max << endl;
}


int operations(int nums[], int size)
{
    int input, count = 0;

    cout << "Enter elements to determine the largest  (enter '0' to stop): " << endl;
    while (true)
    {
        cin >> input;
        if (input != 0)
        {
            if (count >= size)
            {
                cout << "Array is full, cannot add more elements." << endl;
                break;
            }
            else
            {
                nums[count] = input;
                count++;
            }
        }

        else
        {
        
            break;
        }
    }
    return count;
}


int main()
{
    const int max_size = 100;
    int nums[max_size];
    int count = operations(nums, max_size);
    if (count == 0)
    {
        cout << "No elements to compare." << endl;
        return 0;
    }
    else
    max_num(nums, count);
    return 0;
}