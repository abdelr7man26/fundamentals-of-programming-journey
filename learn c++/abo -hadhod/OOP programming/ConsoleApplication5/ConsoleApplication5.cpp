#include <iostream>
#include <string>
using namespace std;
class clsA
{
public:
	int var;
	static int counter;
	clsA()
	{
		counter++;
	}
	void Print()
	{
		cout << "\nvar = " << var << endl;
		cout << "counter = " << counter << endl;
	}
};
int clsA::counter = 0; 
int main()
{
	clsA A1;
	A1.var = 10;
	A1.Print();
	clsA A2, A3;
	A2.var = 20;
	A2.Print();
	A3.var = 30;
	A3.Print();
	
}