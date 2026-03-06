#include <iostream>
using namespace std;

int books(int small, int medium, int large, int spaces)
{
    int area = spaces * 20;
    int large_area = large * 6;
    int medium_area = medium * 4;
    int small_area = small * 2;
    int remaining_area = area - (large_area + medium_area + small_area);
    if (remaining_area <= 0)
    {return 0;}

    return remaining_area;
}

int main()
{
    cout << books(10, 4, 3, 4) << "\n"; // 26
    cout << books(10, 4, 3, 2) << "\n"; // 0
    return 0;
}