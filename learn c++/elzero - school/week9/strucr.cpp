#include <iostream>
#include <string>

using namespace std;
struct student
{
    int id;
    string fname;
    string lname;
    char grade;

};
 int main()
{

    student student_1;
    student_1.fname = "abdelrhman";
    student_1.lname = "mohamed";
    student_1.id = 1;
    student_1.grade = 'A';

    student student_2;
    student_2.fname = "ahmed";
    student_2.lname = "ali";
    student_2.id = 2;
    student_2.grade = 'B';

    cout << student_1.fname << " " << student_1.lname << " " << student_1.id << " " << student_1.grade << endl;
    cout << student_2.fname << " " << student_2.lname << " " << student_2.id << " " << student_2.grade << endl;

    return 0;
}