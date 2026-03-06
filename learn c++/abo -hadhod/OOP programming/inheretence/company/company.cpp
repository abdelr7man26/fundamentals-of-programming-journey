#include <iostream>
#include <string>
#include <vector>
using namespace std;

class clsEmployee {
private :
    int _ID;
    int _Salary;
    string _FullName;
protected :
    static int counter;
public :
    clsEmployee(int salary, string fullname) {
        _Salary = salary;
        _FullName = fullname;
        _ID = counter++;
    }

    void setSalary(int Salary) {
        _Salary = Salary;
    }
    int Salary() {
        return _Salary;
    }

    void SetFullName(string fullname) {
        _FullName = fullname;
    }
    string FullName() {
        return _FullName;
    }

    virtual void Print() const 
    {
        cout << "\n**********************\n";
        cout << "ID          : " << _ID;
        cout << "\nFull Name : " << _FullName;
        cout << "\nsalary    : " << _Salary;
    }
};
int clsEmployee::counter = 1;

class clsManagers : public clsEmployee {
private :
    int _Bounes;
public :
    clsManagers(int salary, string fullname, int bounes)
        :clsEmployee(salary , fullname)
    {
        _Bounes = bounes;
    }

    void SetBounes(int bounes) {
        _Bounes = bounes;
    }
    int Bounes() {
        return _Bounes;
    }

    void Print() const override  {
        clsEmployee::Print();
        cout << "\nBounes : " << _Bounes;
        cout << "\nTitle  : Manager";
        cout << "\n**********************";
    }
};
class clsEngineer : public clsEmployee {
private : 
    string _Language;
public :
    clsEngineer(int salary, string fullname, string language)
        :clsEmployee(salary, fullname)
    {
        _Language = language;
    }

    void SetLanguage(string Language) {
        _Language = Language;
    }
    string Language() {
        return _Language;
    }

    void Print() const override {
        clsEmployee::Print();
        cout << "\nLanguage : " << _Language;
        cout << "\nTitle    : Engineer";
        cout << "\n**********************";
    }
};
int main()
{
    vector <clsEmployee*> company;
    company.push_back( new clsEmployee(40000, "Abdelrhman mohamed"));
    company.push_back(new clsManagers(100000, "Abdelrhman mohamed after 10 years" , 20000));
    company.push_back(new clsEngineer(20000, "Abdelrhman mohamed after 2 years" , "c++"));
    
    for (clsEmployee* emp : company) {
        emp->Print();
    }
    for (clsEmployee* emp : company) 
    {
        delete emp;
    }
    
}

