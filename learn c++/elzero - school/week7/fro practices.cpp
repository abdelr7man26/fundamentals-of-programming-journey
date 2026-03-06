#include <iostream>
using namespace std;
int main()
{
    int nums[] = {100, 200, 300, 400, 500,600 };
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int numsize = std ::size(nums);
    cout << "size of nums array is: " << numsSize << endl;
    cout << "size of nums array is: " << numsize << endl;

    // //method 1: 
    // for (int i = 0; i < numsSize; i += 2)
    // // takes two steps in each iteration
    // {
    //     cout << nums[i] << endl;
    // }
    // //method 2:
    // for (int i = 0; i < numsSize; i ++)
    
    // {
    //     cout << nums[i] << endl;
    //     i++;
    //     // takes two steps in each iteration
    // }

    for (int i =(numsSize-1) ; i > 2 ; i -- )
    
    {
        cout << nums[i] << endl;
    
        // takes two steps in each iteration
    }


    return 0;
}