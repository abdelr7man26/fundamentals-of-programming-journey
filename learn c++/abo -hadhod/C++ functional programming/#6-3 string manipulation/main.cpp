#include <iostream>
#include <string>
#include <iomanip>
#include <vector> 
#include "Header.h";
int main()
{
    string str = "hELLO wORLD iAM nEW hERE aND iAM dOING fIRE !";
    PrintWords(SplitWords(str));
    cout << "*******************************" << endl;
    cout <<JoinWords(SplitWords(str), ',');
    return 0;
}