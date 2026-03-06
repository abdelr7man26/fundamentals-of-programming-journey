#include <iostream>
using namespace std;
int main()
{
    string friends[] = {"Ahmed", "Osama", "Ameer"};
    for (int i = 0; i < 3; i++)
    {
        cout << friends[i] << endl;
        int length = friends[i].length();
        for (int j = 0; j < length; j++)
        {
            cout << friends[i][j] << " ";
            if (j < length -1)
            cout << "- ";
        }
        cout << endl;
       
    }
}