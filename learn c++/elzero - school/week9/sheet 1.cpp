#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int>& nums) {
    nums = {100, 200, 300, 400, 500};
    int new_number;
    cout << "Enter a number to insert: ";
    cin >> new_number;
    nums.push_back(new_number);
}
void loop (const vector<int>& nums)
{
    
    for ( int val : nums )
    {
        cout << val <<endl;
    }
}
void print (const vector<int>& nums) {
    cout << "The first number is : " << nums.front() << endl;
 
    cout << "The last number is : " << nums.back()<<   endl;
}

int main() {
    vector<int> nums;
    insert(nums);  
    loop(nums);  
    print(nums);  
    return 0;
}
