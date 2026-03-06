#include <iostream>
using namespace std;

//
void Swap(int& a,int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void Swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void print(int* pointer ,int size) {
	for (int i = 0; i < size; i++) {
		cout << *(pointer + i)<<endl;
	}
}

struct stEmployee {
private :
	string name;
	int age;
public :
	void setter(string name, int age) {
		this->name = name;
		this->age = age;
	}
	void getter() {
		cout << this->name << endl;
		cout << this->age << endl;
	}
};

int main()
{
	int a=20, b=30;
	printf("%50s\n", "swapping by refrence");
	printf("a before swap (%2d) , b before swap (%2d).\n", a, b);
	Swap(a, b);
	printf("a after swap (%2d) , b after swap (%2d).\n", a, b);

	int* A = &a, * B = &b;
	printf("%50s\n", "swapping by Pointer");
	printf("a before swap (%2d) , b before swap (%2d).\n", a, b);
	Swap(A, B);
	printf("a after swap (%2d) , b after swap (%2d).\n", a, b);

	printf("%50s\n", "array elements");
	//5lek fakr en el array hya asln btb2a by refrence f bt3tbr pointer 3la el first element 3la tol m4 bn7tag n3ml &
	int array[5] = { 10,20,30,40,50 };
	//int * pointer = array //true
	// int * pointer = &array // false 
	//int * ponter = &array[0] // true 
	print(array, 5);

	printf("%50s\n", "struct access");
	stEmployee person1;
	person1.setter("Abdelrhman", 21);
	person1.getter();
	printf("%65s\n", "struct  access using pointer");
	stEmployee* pointer;
	pointer = &person1;
	pointer->setter("salma", 19);
	pointer->getter();
	return 0;
}

