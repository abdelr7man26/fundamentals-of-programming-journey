#include <iostream>
using namespace std;

int main()
{
    int check = 25;
    int nums[]{40, 20, 30, 70, 100};

    int size = sizeof(nums) / sizeof(nums[0]);

    if (nums[0] > check)
    {
        cout << "{" << nums[0] << "}";
        cout << " + ";
        cout << "{" << nums[size - 2] << "} = ";
        cout << nums[0] + nums[size - 2] << endl;
    }
    else if (nums[1] > check)
    {
        cout << "{" << nums[1] << "}";
        cout << " + ";
        cout << "{" << nums[size - 2] << "} = ";
        cout << nums[1] + nums[size - 2] << endl;
    }
    else if (nums[2] > check)
    {
        cout << "{" << nums[2] << "}";
        cout << " + ";
        cout << "{" << nums[size - 2] << "} = ";
        cout << nums[2] + nums[size - 2] << endl;
    }

    return 0;
}
