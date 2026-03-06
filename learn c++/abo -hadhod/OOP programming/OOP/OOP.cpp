#include <iostream>
using namespace std;

class clEmployee {
private:
	int _salary =0;
public :
	void Setter(int Salary); 
	int Getter(); 

	_declspec(property(get = Getter, put = Setter))
		string salary;
};

void clEmployee::Setter(int Salary) {
	if (Salary > 3000) {
		_salary = Salary;
	}
	else
		cout << "salary must be greater than 3000";

}

int clEmployee::Getter() {
	return _salary;
}

int main()
{
	clEmployee mohamed;
	mohamed.salary =4000;
	cout << mohamed.salary;
	return 0;
}


