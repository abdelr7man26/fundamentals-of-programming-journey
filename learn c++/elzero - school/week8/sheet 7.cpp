#include <iostream>
using namespace std;
//mathmatecal way::

// int beforeresult(int num, int before) {
//     return ((before + 1) * (2 * num - before)) / 2;}

int beforeresult ( int num , int before )
{
    int result = 0; 
    for ( int i = 0 ; i < (before+1) ; i ++)
    {
       result += num;
       --num;
    }
    return result;
}
int main()
{
  cout << beforeresult(10, 5) << "\n";
  return 0;
}