#include <iostream>

using namespace std;

struct cardetials {
	int numberOfSylenders;
	int CCs;
	int horsePower;
	int maxSPeed;
};

struct car {
	string brand;
	string model;
	int year;
	cardetials details;
};

enum availablity {available = 1 , notavailable  };

int main()
{
	car car1;
	car1.brand = "BMW";
	car1.model = "335";
	car1.year = 2010;
	car1.details.CCs = 3000;
	car1.details.horsePower = 300;
	car1.details.maxSPeed = 250;
	car1.details.numberOfSylenders = 6;
	availablity available;
	available = availablity::notavailable;

	cout << "The BMW engineers know exactly what there objective is to make the : " << car1.brand << " " << car1.model << " " << car1.year << " the most powerfull BMW for the road objective achieved " <<
		"it generate an enormouse : " << car1.details.horsePower << " HP from an engine that contain : " << car1.details.CCs << " CC " << " from a " << car1.details.numberOfSylenders << " stlenders " <<
		" that reaches max speed of : " << car1.details.maxSPeed <<" km/h" <<endl;

	cout <<endl<< available;
	return 0;
}