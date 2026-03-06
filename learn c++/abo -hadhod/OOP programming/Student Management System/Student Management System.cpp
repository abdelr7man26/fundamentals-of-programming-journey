#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

class clsStudent {
private :
    static int counter;
    int _ID;
    array<float, 3> _Grades;
    string _Full_Name;
    static float _Passing_Grade;
    float Total(const array <float, 3>& Grades) const {
        float sum = 0;
        for (float Grade : Grades) {
             sum += Grade;
        }
        return sum;
    }
public :
    clsStudent(string Full_Name , array <float , 3> Grades){
        _Full_Name = Full_Name;
        _ID = counter;
        counter++;
        _Grades = Grades;
        
    }
    
    static void Set_Passing_Grade(float Grade) {
        _Passing_Grade = Grade;
    }

    string calculateStatus() const {
        return (Total(_Grades) > _Passing_Grade) ? "Passed" : "Failed";
    }
    void printInfo() const {
        cout << "ID            : " << _ID << endl;
        cout << "Full Name     : " << _Full_Name << endl;
        cout << "ToTal         : " << Total(_Grades) << endl;
        cout << "Status        : " << calculateStatus() << endl;
        cout << "Arabic Grade  : " << _Grades.at(0) << endl;
        cout << "Math Grade    : " << _Grades.at(1) << endl;
        cout << "English Grade : " << _Grades.at(2) << endl;
    }

};

int clsStudent::counter = 1;
float clsStudent::_Passing_Grade = 150;
int main()
{

    string name;
    array <float , 3 >Grades;
    vector <clsStudent> Students;
    for (size_t i = 0; i < 3; ++i) {
        
        cout << "Enter your Full name : ";
        getline(cin, name);
        cout << "Enter Arabic grade : ";
        cin >> Grades[0];
        cout << "Enter Math Grade : ";
        cin >> Grades[1];
        cout << "Enter English Grade : ";
        cin >> Grades[2];
        cout << "*************************\n";
        cin.ignore();
        clsStudent Student(name, Grades);

        Students.push_back(Student);
    }
    for (const auto& Student : Students) {

        Student.printInfo();
        cout << "*****************************\n";
    }
    
    return 0;
}

