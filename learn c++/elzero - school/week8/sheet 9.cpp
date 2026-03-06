#include <iostream>
using namespace std;
int sumall (int nums [100] , int size , int noneed)
{
    int sum = 0 ;
    for (int i = 0 ; i < size ; i++)
    {
       if (nums[i] != noneed) 
        sum += nums[i];
    }
  
    return sum; 
}
int main()
{
  int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; 
  int size = std :: size(numbers);
  int noneed = 13;
  cout << sumall(numbers, size, noneed) << "\n";
  return 0;
}