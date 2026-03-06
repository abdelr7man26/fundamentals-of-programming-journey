#pragma once
#include "clsDLL.h"

using namespace std;

template <typename T>
class DynamicArray
{
private:
	int _size = 0;
	T* temp;
	T* OriginalArray;

public :


	DynamicArray(int size = 0) :OriginalArray(NULL), _size(size) { OriginalArray = new T[_size]; }
	~DynamicArray() { delete[]  OriginalArray;  OriginalArray = NULL; }

	T& operator[] (int index) {
		if (index < 0 || index >= _size) {
			throw out_of_range("index error");
		}

		return OriginalArray[index];
	}

	bool isEmpty() {
		return _size == 0;
	}

	size_t size() {
		return _size ;
	}

	void print() {
		if (OriginalArray == NULL) {
			return;
		}
		int i = 0;
		while (i < _size) {
			cout << OriginalArray[i] << "  ";
			++i;
		}
	}
	
	void resize(int newSize) {
		int i = 0;
		_size = newSize;
		T* temp = new T[newSize];
		while (i < newSize) {
			
			temp[i] = OriginalArray[i];
			++i;
		}
		delete[] OriginalArray;
		OriginalArray = temp;
	}

	void reverse() {
		int i = 0; 
		int j = _size-1;
		temp = new T[_size];
		while (i < _size ) {
			temp[i] = OriginalArray[j];
			++i;
			--j;
		}
		delete[] OriginalArray;
		OriginalArray = temp;
	}

	void clear() {
		delete[] OriginalArray;
		OriginalArray = NULL;
		_size = 0;
	}
	
	void deleteItem(int index) {
		if (index < 0 || index >= _size) {
			return; 
		}

		if (_size == 1) {
			delete[] OriginalArray;
			OriginalArray = nullptr;
			_size = 0;
			return;
		}

		int newsize = _size - 1;
		temp = new T[newsize];

		for (int i = 0, j = 0; i < _size; i++) {
			if (i == index) continue; 

			temp[j] = OriginalArray[i];
			j++;
		}

		delete[] OriginalArray; 
		OriginalArray = temp;
		_size = newsize;        
	}
	
	int find(int value) {
		for (int counter = 0; counter < _size; counter++) {
			if (OriginalArray[counter] == value) {
				return counter;
			}
		}
		return -1;
	}

	void insertAt(int index, T value) {
		if (index > _size || index < 0)
		{
			return;
		}

		temp = new T[_size + 1];

		for (int i = 0; i < index; i++) {
			temp[i] = OriginalArray[i];
		}

		temp[index] = value;

		for (int i = index; i < _size; i++) {
			temp[i + 1] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = temp;
		_size++;
	}

};
