#include <iostream>
#include <string>
#include <array>

using namespace std;


enum enGender
{
	male = 1, female = 2
};
struct stmyinfo {
	string myname;
	short  myage;
	string mygender;
	string myjob;
	int mysalary;
	string mycountry;
};

void PeopleInfo(stmyinfo &info) {
	cout << "Enter your full name : ";
	getline(cin, info.myname);
	
	cout << "Enter your age : ";
	cin >> info.myage;
	
	int intgender;
	enGender genderType;

	cout << "choose  your gender : " << endl;
	cout << "\t (1) MAle. \n";
	cout << "\t(2) Female.\n";
	cin >> intgender;
	cin.ignore();

	genderType = (enGender)intgender;
	
	switch (genderType) {
	case enGender::male:
		info.mygender = "male";
		break;
	case enGender::female:
		info.mygender = "female";
		break;

	}


	cout << "Enter your job : ";
	getline(cin, info.myjob);

	cout << "Enter your salary : ";
	cin >> info.mysalary;
	cin.ignore();

	
	cout << "Enter your country : ";
	getline(cin, info.mycountry);
	
}

void PersonInfo(stmyinfo person[], const int &size )
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter person " << (i + 1) << " info : \n";
		PeopleInfo(person[i]);
	}
}

void personprint(const stmyinfo &info, string stars = "********************") {
	cout << stars << endl;
	cout << "name : " << info.myname << "\n";
	cout << "age : " << info.myage << "\n";
	cout << "gender :" << info.mygender << endl;
	cout << "job : " << info.myjob << "\n";
	cout << "salary :" << info.mysalary << "\n";
	cout << "country : " << info.mycountry << "\n";
	cout << stars << endl;
}

void peopleprint(const stmyinfo person[], const int& size)
{
	for (int i = 0; i < size; i++)
	{
		personprint(person[i]);
	}
}

void SearchPersonByName(const stmyinfo person[], const int& size, const string& name)
{
	for (int j = 0; j < size; j++)
	{
		if (person[j].myname == name)
		{
			cout << "person number " << j + 1 << "\n";

			personprint(person[j]);
			break;
		}
	}

}

int main()
{
	int numofpersons = 0;
	cout << "How many persons do you want to enter ? ";
	cin >> numofpersons;
	cin.ignore();

	stmyinfo person[100];
	
	PersonInfo(person, numofpersons);
	peopleprint(person, numofpersons);
	string name;
	cout << "Enter the name you want to search for : ";
	getline(cin, name);
	SearchPersonByName(person, numofpersons, name);



	return 0;
}

