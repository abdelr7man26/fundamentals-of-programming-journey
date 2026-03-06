#include <iostream>
#include <string>
using namespace std;

string swapping (string s)
{
    for (int i = 0; i < s.length() ; i++)
    {
        char H =s[i];
        if (H=='h'|| H=='H' )
        continue;
        else if (isupper(H))
        s[i] = tolower(H);
        else
        s[i]= toupper(H);

    }
    return s;
}
int main()
{
    cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
    return 0;
}