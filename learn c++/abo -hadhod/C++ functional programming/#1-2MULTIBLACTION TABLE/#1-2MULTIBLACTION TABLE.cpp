#include <iostream>
using namespace std;


void TableHeader() {

	cout << "\n\n\t\t\t\tMultiplication Table from 1 to 10 \n " << endl;
	for (int i = 1; i <= 10; i++) {
		cout << "\t"<< i;
		
	}
	cout <<endl<< "------------------------------------------------------------------------------------" << endl;

}
void TableBody() {
	for (int i = 1; i <= 10; i++) {
		cout << " " << i;
		cout << "  " << "|";
		for (int j = 1; j <= 10; j++) {
			cout << "\t" << i * j;
		}
		cout << endl;
	}
}

int main()
{
	TableHeader();
	TableBody();
	return 0;
}
