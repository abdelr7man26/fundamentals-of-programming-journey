#include <iostream>

using namespace std;

enum enhaslicense { no, yes };

struct stEmployeeinfo {
	string name;
	int age;
	enhaslicense haslicense ;
};

enhaslicense checklicense() {
	int license;
	cout << "Do you have a driving license? (1 for yes, 0 for no): ";
	cin >> license;
	if (license == yes) {
		return yes;
	} else {
		return no;
	}
}

stEmployeeinfo getinfo()
{

	stEmployeeinfo emp;

	cout << "Enter name: ";
	cin >> emp.name;
	cout << "Enter age: ";
	cin >> emp.age;
	emp.haslicense = checklicense();
	return emp;	

}

void HiringResult(stEmployeeinfo employee) {
	if (employee.age >= 21 && employee.haslicense == yes) {
		cout << "Hired" << endl;
	} else {
		cout << "Rejected" << endl;
	}
}
int main (){
	HiringResult(getinfo());
	
	return 0;
}