#include <iostream>
using namespace std;

enum encolour{ red, green , yellow , blue };
enum enmarritalstatues { married , notmarried };
enum engender { male , female };
struct staddress {
	string street;
	string city;
	string country;
	string zipcode;
};
struct stcontactinfo {
	string phonenumber;
	string email;
	 
	staddress address;
};
struct stperson {
	string fname;
	string Lname;
	stcontactinfo contactinfo;
	encolour colour;
	enmarritalstatues marritalstatues;
	engender gender;

};
int main() {
	stperson person1;
	person1.colour = encolour::red;
	person1.gender = engender::male;
	person1.marritalstatues = enmarritalstatues::married;
	person1.fname = "abdelrhman";
	person1.Lname = "hamd";
	person1.contactinfo.address.city = "damanhour";
	person1.contactinfo.address.country =  "Egypt";
	person1.contactinfo.address.street = "sanhour";
	person1.contactinfo.address.zipcode = "090909";
	person1.contactinfo.phonenumber ="01068190567";
	person1.contactinfo.email = "abdelr7man264@gmail.com";
	
	cout << "Name : " << person1.fname << " " << person1.Lname << "\n";
	cout << "Address : " << person1.contactinfo.address.country << "-" << person1.contactinfo.address.city << "-" << person1.contactinfo.address.street << "\n";
	cout << "ZIP code : " << person1.contactinfo.address.zipcode <<"\n";
	cout << "contact info : " << person1.contactinfo.phonenumber << "-" << person1.contactinfo.email << "\n";
	cout << "favorite colour : " << person1.colour << endl;
	cout << "married : " << person1.marritalstatues << endl;
	cout << "gender : " << person1.gender << endl;

	return 0;
}