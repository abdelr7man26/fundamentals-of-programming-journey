#include <iostream>
#include <vector>
using namespace std;
void squarebrackets_method(vector<int> &nums)
{
    cout << "first Number in the vector: " << nums[0] << endl;
    cout << "last Number in the vector: " << nums[3] << endl;
}
void at_mthod(vector<int> &nums)
{
    cout << "first Number in the vector: " << nums.at(0) << endl;
    cout << "last Number in the vector: " << nums.at(3) << endl;
}
void front_back_method(vector<int> &nums)
{
    cout << "first Number in the vector: " << nums.front() << endl;
    cout << "last Number in the vector: " << nums.back() << endl;
}
void iterator_method(vector<int> &nums)
{
    vector<int>::iterator it = nums.begin();
    cout << "first Number in the vector: " << *it << endl;
    cout << "last Number in the vector: " << *(it + 3) << endl;
}

int main()
{
     vector<int> numbers = {10, 20, 30, 40};

    squarebrackets_method(numbers);
    at_mthod(numbers);
    front_back_method(numbers);
    iterator_method(numbers);
    return 0;
}