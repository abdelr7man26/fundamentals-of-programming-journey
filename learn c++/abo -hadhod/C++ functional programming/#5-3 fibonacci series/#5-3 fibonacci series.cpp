#include <iostream>
using namespace std;

void fibonacciseriesloop(int itterations) {
    short first = 0;
    short second = 1;
    int sum = 0;
    cout << 1 << "    ";
    for (short i = 1; i < itterations; i++) {
        sum = first + second;
        cout << sum << "    ";
        first = second;
        second = sum;
    }
}
void fibonacciseriesrec(int itterations, short first = 0, short second = 1)
{
    if (itterations == 1) return;
    
    int sum = first + second;
    first = second;
    second = sum;
    cout << sum << "    ";
    fibonacciseriesrec(itterations - 1,first,second );
}
int main()
{
    fibonacciseriesloop(10);
    cout <<endl <<1<<"    ";
    fibonacciseriesrec(10);
}

