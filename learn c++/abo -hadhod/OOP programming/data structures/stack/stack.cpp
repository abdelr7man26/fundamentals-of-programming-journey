#include <iostream>
#include "clsStack.h"

using namespace std;

int main() {
    Stack<int> myStack;

    cout << "--- Testing Push & Print ---" << endl;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.print(); 

    cout << "\n--- Testing Top & Bottom ---" << endl;
    cout << "Top Element: " << myStack.Top() << endl;       
    cout << "Bottom Element: " << myStack.bottom() << endl; 

    cout << "\n--- Testing Find ---" << endl;
    int target = 20;
    auto node = myStack.find(target); 
    if (node != nullptr) {
        cout << "Element " << target << " found in Stack!" << endl;
    }
    else {
        cout << "Element " << target << " NOT found." << endl;
    }

    cout << "\n--- Testing Pop ---" << endl;
    myStack.pop();
    cout << "After Pop (40 should be removed):" << endl;
    myStack.print();

    cout << "\n--- Testing Reverse ---" << endl;
    myStack.reverse();
    cout << "After Reverse:" << endl;
    myStack.print();

    cout << "\n--- Testing Size& clear & Empty ---" << endl;
    cout << "Stack Size: " << myStack.size() << endl;
    myStack.clear();
    cout << "after clear ";
    cout << "Is Stack Empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;



    return 0;
}