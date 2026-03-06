#pragma once
#include <iostream>

using namespace std;

template<typename T>
class Queue
{
private:
	struct Node {
		T _value;
		Node* _next;
		Node() : _next(NULL) {}
	};
	Node* _front;
	Node* _back;
	size_t _size = 0;
public:
	Queue() : _front(NULL), _back(NULL) {}
	
	void push(T value) {
		Node* newNode = new Node();

		newNode->_value = value;
		newNode->_next = NULL;

		if (_size == 0) {
			_front = _back = newNode;
		}
		else {
			newNode->_next = newNode;
			_back = newNode;
		}


		_size++;
	}
	void pop() {
		if (_front == NULL) {
			return;
		}

		Node* current = _front;

		_front = _front->_next; 

		if (_front == nullptr) { 
			_back = nullptr;
		}
		delete current;
		_size--;
	}

	T front() {
		return _front->_value;
	}
	T back() {
		return _back->_value;
	}

	void reverse() {

		if (_size <= 1) return;

		Node* current = _front;
		Node* prev = NULL;
		Node* temp = NULL;

		while (current != NULL) {
			temp = current->_next;
			current->_next = prev;
			prev = current;
			current = temp;
		}

		temp = _front;
		_front = _back;
		_back = temp;
	}

	T& operator[] (int index) {

		if (index < 0 || index >= _size) {
			throw out_of_range("index error");
		}

		Node* current;
		current = _front;

		for (int i = 0; i < index; i++) current = current->_next;

		return current->_value;
	}

	bool isEmpty() {
		return _size == 0;
	}
	void print() {
		Node* current = _back;
		while (current != NULL) {
			cout << current->_value << " <-> ";
			current = current->_next;
		}
		cout << "NULL" << endl;
	}
	size_t size() {
		return _size;
	}

	void clear() {
		Node* temp = _front;
		while (temp != NULL) {
			Node* nextNode = temp->_next;
			delete temp;
			temp = nextNode;
		}
		_front = _back = NULL;
		_size = 0;
	}
};

