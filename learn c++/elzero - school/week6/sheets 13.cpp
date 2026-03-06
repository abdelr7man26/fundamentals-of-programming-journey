#include <iostream>

using namespace std;
int main()
{
    string fName = "Elzero ";
    string mName = "Web ";
    string lName = "School";
    string timp = fName;
    string  fullname = fName + mName + lName;
    cout << "Full Name: " << fullname << endl;
    cout << "1"<<timp.append(mName).append(lName) << endl;
    cout << fName << " " << mName << " " << lName << endl;
}