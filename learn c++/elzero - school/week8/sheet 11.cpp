#include <iostream>
using namespace std;

int pricing (int total , int used , int price , int tax )
{
    int New = total - used;
    int used_price = price - 200;
    int sales = (New* price ) + ( used * used_price);
    int tax = sales * (tax/100.0); 
    int net_profit = sales - tax;
    return net_profit;
}
int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}