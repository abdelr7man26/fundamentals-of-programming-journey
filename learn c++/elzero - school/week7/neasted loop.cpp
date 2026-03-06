#include <iostream>
using namespace std;
int main()
{
    string products[] = {"T-shirts", "shirts", "pants"};
    string sizes[] = {"small", "medium", "large"};
    for (int i = 0; i < 3; i++)
    {
        cout << "product: " << products[i] << endl;
        cout << "Sizes available: " << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << sizes[j];
            
            if (j < 2)
            {
                cout << ",";
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl
             << "=======================" << endl;
    }
    return 0;
}