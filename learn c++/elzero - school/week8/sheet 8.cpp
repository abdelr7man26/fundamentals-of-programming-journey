#include<iostream>
using namespace std;
int plusandmultiply (int nums[100] , int size)
{
    int sum =0;
    int multi =1;
    for (int i = 0 ; i < size ; i++ )
    {
        
        int num = nums[i];
        if (num % 2 == 0)
        {
            sum += num;
           
        }
        else {
            multi *= num;
            
        }

    }
    int result = sum + multi ;
    return result;

}
int main()
{
  int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
  int size = std :: size(numbers);
  cout << plusandmultiply(numbers, size) << "\n";
return 0 ;
}