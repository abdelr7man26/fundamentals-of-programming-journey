#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<array<int, 5>, 3> seq = {{{1, 5, 10, 16, 23}, {2, 4, 8, 16, 32}, {1, 1, 2, 3, 5}}};
    array<int, 3> answers;
    cout << "for this sequence {1, 5, 10, 16, ??} what is missing " << endl;

    cout << " the missing number is : ";
    cin >> answers[0];

    cout << "for this sequence {2, 4, 8, 16, ??} what is missing " << endl;

    cout << " the missing number is : ";
    cin >> answers[1];

    cout << "for this sequence {1, 1, 2, 3, ??} what is missing " << endl;

    cout << " the missing number is : ";
    cin >> answers[2];

    if (answers[0] == seq[0][4] && answers[1] == seq[1][4] && answers[2] == seq[2][4])
        cout << " GG Champ " << endl;
    else
        cout << " loooooooooser " << endl;
    return 0;
}