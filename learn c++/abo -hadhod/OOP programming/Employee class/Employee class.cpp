#include <iostream>

using namespace std;
class clsEmployee {
private :
    static int counter;
    int _ID;
    int _Salary;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    string _Department;
    
public :
    clsEmployee(int Salary, string FirstName, string LastName, string Title, string Email, string Phone , string Department) {
        _FirstName = FirstName;
        _LastName = LastName;
        _Title = Title;
        _Email = Email;
        _Phone = Phone;
        _Salary = Salary;
        _Department = Department;
        _ID = counter;
        counter++;
    }

    void FirstName(string FirstName) {
        _FirstName = FirstName;
    }
    string GetFisrtName() {
        return _FirstName;
    }

    void LastName(string LsstName) {
        _LastName = LsstName;
    }
    string LastName() {
        return _LastName;
    }

    string GETFullName() {
        return _FirstName + " " + _LastName;
    }

    void Title(string Title) {
        _Title = Title;
    }
    string GETTitle() {
        return _Title;
    }

    void Email(string Email) {
        _Email = Email;
    }
    string GETEmail() {
        return _Email;
    }

    void Phone(string Phone) {
        _Phone = Phone;
    }
    string GETPhone() {
        return _Phone;
    }

    void Department(string Department) {
        _Department = Department;
    }
    string GETDepartment() {
        return _Department;
    }

    void Salary(int Salary) {
        _Salary = Salary;
    }
    int GETSalary() {
        return _Salary;
    }

    int GETID() {
        return _ID;
    }

    void Print() {
        cout << "**********************\n";
        cout << "ID         : " << _ID << endl;
        cout << "Full Name  : " << GETFullName()<<endl;
        cout << "Title      : " << _Title<<endl;
        cout << "Department : " << _Department<<endl;
        cout << "Salary     : " << _Salary<<endl;
        cout << "Email      : " << _Email<<endl;
        cout << "Phone      : " << _Phone<<endl;
        cout << "*********************\n";
    }
    __declspec(property(get = GetTitle , put = Title)) string title;
    __declspec(property(get = GetEmail, put = Email)) string email;
    __declspec(property(get = GetPhone, put = Phone)) string phone;
    __declspec(property(get = GetDepartment, put = Department)) string department;
    __declspec(property(get = GetSalary, put = Salary)) int salary;
};
int clsEmployee::counter = 1;
int main()
{
    clsEmployee Employee1(20000, "abdelrhman", "mohamed", "Software Engineer", "abdelr7man264@gmail.com", "01068190567" , "AI");
    clsEmployee Employee2(30000, "ahmed", "mohamed", "Engineer", "ahmed264@gmail.com", "0106666667" , "Back end ");
    Employee1.Print();
    Employee2.Print();
    return 0;
}

