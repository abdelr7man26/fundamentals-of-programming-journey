#include <iostream>
using namespace std;

class clsPerson {

private:
    static int id_counter;
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;



public:
    int ID() {
        return _ID;
    }

    string GetFirstName() {
        return _FirstName;
    }

    void SetFirstName(string NewName) {
        _FirstName = NewName;
    }

    string GetLastName() {
        return _LastName;
    }

    void SetLastName(string NewName) {
        _LastName = NewName;
    }

    string GetEmail() {
        return _Email;
    }

    void SetEmail(string NewEmail) {
        _Email = NewEmail;
    }



    string GetPhone() {
        return _Phone;
    }

    void SetPhone(string NewPhone) {
        _Phone = NewPhone;
    }

    string FullName() {
        return _FirstName + " " + _LastName;
    }

    clsPerson(string firstname, string lastname, string email, string phone) {
        _ID = id_counter++;
        _FirstName = firstname;
        _LastName = lastname;
        _Email = email;
        _Phone = phone;
    }
    clsPerson(int counter, string firstname, string lastname, string email, string phone) {
        _ID = counter++;
        _FirstName = firstname;
        _LastName = lastname;
        _Email = email;
        _Phone = phone;
    }



    void Print() {
        cout << "\n--------------------------------------------------------------";
        cout << "\nID : " << _ID;
        cout << "\nFirst Name : " << _FirstName;
        cout << "\nLast Name : " << _LastName;
        cout << "\nFullName : " << FullName();
        cout << "\nEmail : " << _Email;
        cout << "\nPhone : " << _Phone;
        cout << "\n--------------------------------------------------------------";
    }
    void ssendemail(string subject, string body) {
        cout << " the following message sent successfully to the mail " << _Email << endl;
        cout << " subject : " << subject << endl;
        cout << " body : " << body << endl;
    }
    void ssendsms(string subject) {
        cout << " the following message sent successfully to the number " << _Phone << endl;
        cout << " message : " << subject << endl;
    }

};
int clsPerson::id_counter = 1;

class clsProgrammer : public clsPerson {
private:
    static int prog_counter;
    float _Salary;
    string _Title;
    string _Department;
    string _MainProgrammingLanguage;
public:
    clsProgrammer(string firstname, string lastname, string email, string phone, float salary, string title, string department, string MainProgrammingLanguage)
        :clsPerson(prog_counter, firstname, lastname, email, phone)
    {
        _Salary = salary;
        _Title = title;
        _Department = department;
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }
    void Print()
    {
        cout << "\n--------------------------------------------------------------";

        cout << "\nID                        : " << ID();
        cout << "\nFirst Name                : " << GetFirstName();
        cout << "\nLast Name                 : " << GetLastName();
        cout << "\nFullName                  : " << FullName();
        cout << "\nEmail                     : " << GetEmail();
        cout << "\nPhone                     : " << GetPhone();
        cout << "\nSalary                    : " << _Salary;
        cout << "\nTitle                     : " << _Title;
        cout << "\nDepartment                : " << _Department;
        cout << "\nMain Programming Language : " << _MainProgrammingLanguage;

        cout << "\n--------------------------------------------------------------";


    }

    string GetTitle() {
        return _Title;
    }
    void SetTitle(string Title) {
        _Title = Title;
    }

    string GetDepartment() {
        return _Department;
    }
    void SetDepartment(string Department) {
        _Department = Department;
    }

    string GetMainProgrammingLanguage() {
        return _MainProgrammingLanguage;
    }
    void SetMainProgrammingLanguage(string MainProgrammingLanguage) {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    float GetSalary() {
        return _Salary;
    }
    void SetSalary(float salary) {
        _Salary = salary;
    }
};
int clsProgrammer::prog_counter = 1;


int main()
{
    clsPerson person1("abdelrhman", "mohamed", "abdo@gmail.com", "01096890562"), person2("mohmed", "hamed", "ibnnili8@gmail.com", "01115814201");
    person1.Print();
    person2.Print();

    clsProgrammer Programmer("abdelrhman", "mohamed", "abdelr7man264@gmailcom", "01068190567", 50000, "Engineer", "Back-end", "cPP");
    Programmer.Print();
    //clsProgrammer Prog1("Ali", "Hassan", "ali@mail.com", "012345678", 5000, "Dev", "IT", "C++");

    //// مؤشر من نوع "شخص" بيشاور على "مبرمج"
    //clsPerson* PersonPtr = &Prog1;

    //// تفتكر هنا هيطبع بيانات الشخص بس؟ ولا بيانات المبرمج كاملة؟
    //PersonPtr->Print();
    return 0;
}
