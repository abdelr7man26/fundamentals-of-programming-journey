#include <iostream>
#include "clsDLL.h"
using namespace std;
int main()
{
    doublyLinkedList<int> list;
    list.insert(1, 100);
    list.insert(2, 200);
    list.insert(2, 150); 
    list.insert(4, 400);
    list.print();
    list.revreseprint();
    cout << list[1];
    list[1] = 500;
    list.print();
	return 0;
}

