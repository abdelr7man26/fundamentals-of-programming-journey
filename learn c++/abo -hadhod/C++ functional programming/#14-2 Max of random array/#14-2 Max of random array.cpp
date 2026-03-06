#include <iostream>
using namespace std;
int Random(int From, int To)
{
    int Rands = rand() % (To - From + 1) + From;
    return Rands;
}

void ReadArrayData(int Arr[100], int& Length)    
{
    cout << "How Much Element do you want in your Array? " << endl;
    cin >> Length;

    cout << endl;

    for (int i = 0; i <= Length; i++)
        Arr[i] = Random(1, 100);

}



void PrintArrayElements(int Arr[100], int Length)
{
    for (int i = 0; i <= Length; i++)
    {
        cout << Arr[i] << " ";
    }
}
int MaxInTheArray(int array[100], int Length) {

    int max = array[0];
    for (int i = 0; i <= Length; i++)
    {
        if (array[i] > max) {
            max = array[i];
       }
    }
    return max;
}
int main()
{
    srand((unsigned)time(NULL));
    int Length;
    int array[100];
    ReadArrayData(array,Length);
    PrintArrayElements(array, Length);
    cout << endl;
    cout<<MaxInTheArray(array, Length);
    return 0;
    
}