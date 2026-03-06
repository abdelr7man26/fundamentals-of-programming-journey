#include <iostream>

using namespace std;

class clsperson {
public:
	string _fullName = "abdelrhman mohamed hamd";
};

class clsemployee : public clsperson {
public :
	string _title = "CEO";
};

int main()
{
	clsemployee employee;
	clsperson* person = &employee;

	person->_fullName;


	return 0;
}