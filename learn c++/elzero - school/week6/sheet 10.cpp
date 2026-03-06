#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    cout << "first " << *nums.begin() << endl;
    cout <<"last " << *(nums.end()-1) << endl;

    cout << "first" << nums.front() << endl;
    cout << "last " << nums.back() << endl;
    
    cout << "first " << nums [0] << endl;
    cout << "last " << nums [nums.size() - 1] << endl;
return 0;
}