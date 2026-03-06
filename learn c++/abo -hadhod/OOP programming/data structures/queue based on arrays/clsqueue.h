#pragma once
#include "clsDynamicArray.h"
using namespace std;

template<typename T>
class Queue
{
private:
	DynamicArray<T> queue;
public:
	void push(T value) {
		queue.insertAt(queue.size(), value);
	}
	void pop() {
		queue.deleteItem(0);
	}

	T front() {
		return queue[0];
	}
	T back() {
		return queue[queue.size()];
	}
	T& operator[] (int index) {
		return queue[index];
	}

	void Reverse() {
		queue.reverse();
	}
	bool isEmpty() { return queue.isEmpty(); }

	size_t size() {
		return queue.size();
	}
	void clear() {
		queue.clear();
	}

	void print() {
		queue.print();
	}
};

