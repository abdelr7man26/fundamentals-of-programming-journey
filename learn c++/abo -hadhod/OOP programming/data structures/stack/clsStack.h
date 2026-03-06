#pragma once
#include "clsDLL.h"
using namespace std;

template <typename T>
class Stack {
private:
	doublyLinkedList<T> stack;

public:
	void push(T value) {
		stack.insert(1 , value);
	}
	void pop() {
		stack.remove(1);
	}

	T& operator[](int index) {
		return stack[index];
	}
	T Top() {
		return stack[0];
	}
	T bottom() {
		
		return stack[stack.size() -1];
	}

	size_t size() {
		return stack.size();
	}
	void print() {
		stack.print();
	}

	typename doublyLinkedList<T>::Node* find(T value) {
		return stack.findbyvalue(value);
	}
	
	void reverse() {
		stack.reverse();
	}

	bool isEmpty() {
		return stack.isEmpty();
	}
	void clear() {
		stack.clear();
	}
};