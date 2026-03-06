#include <iostream>
using namespace std;
int main() {
    int nums[] = {10, 20, 30, 40, 20, 50};

// Method 1
int size = sizeof(nums) / sizeof(nums[0]);
cout << "Size of the array: " << size << endl;

// Method 2
cout << "Size of the array : " << std :: size(nums) << endl;

// Method 3
    int *begin = nums;
    int *end = nums + sizeof(nums) / sizeof(nums[0]);
    int length = end - begin;
    cout << "Length of the array: " << length << endl;  
return 0;
}
    
