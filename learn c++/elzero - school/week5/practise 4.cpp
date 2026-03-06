#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << " enter the number : ";
    cin >> num;
    switch (num)
    {
    case 1:
    case 10:
        cout << " congratulations you won an iphone " << endl;
        break;

    case 2:
    case 20:
        cout << " congratulations you won an ipad " << endl;
        break;

    case 3:
    case 30:
        cout << " congratulations you won an macbook " << endl;
        break;
    default:
        cout << " go fuck your self bad loser " << endl;
    }
    return 0;
}