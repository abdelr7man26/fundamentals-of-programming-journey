#pragma once
#include <iostream>
#include "clsStack.h"

using namespace std;

template<typename T>
class doublyLinkedList {
private:
    
    size_t _size = 0;
public:
    struct Node {
        T _value = 0;
        Node* _prev;
        Node* _next;
        Node() : _next(nullptr), _prev(nullptr) {}
    };
    Node* _head;
    Node* _tail;

    doublyLinkedList() : _head(NULL), _tail(NULL) {}


    void insert(int location, T val) {
        if (_head == NULL && location > 1) return;

        if (location == 1) {
            Node* newNode = new Node();
            newNode->_value = val;
            newNode->_next = _head;
            if (_head != NULL) _head->_prev = newNode; 
            _head = newNode;
            if (_size == 0) _tail = _head; 
            _size++;
            return;
        }

        Node* current = _head;
        for (size_t i = 1; i < location - 1 && current != NULL; ++i) {
            current = current->_next;
        }
        if (current == NULL) return;

        Node* newnode = new Node();
        newnode->_value = val;

        newnode->_next = current->_next;
        newnode->_prev = current;

        if (current->_next != NULL) {
            current->_next->_prev = newnode; 
        }
        else {
            _tail = newnode; 
        }

        current->_next = newnode;
        _size++;
    }
    void remove(int location) {
        if (_head == NULL || location < 1 || location > _size) {
            return;
        }

        Node* current = _head;
        if (location == 1) {
            _head = current->_next;
            if (_head != NULL) {
                _head->_prev = NULL;
            }
            else {
                _tail = NULL; 
            }
            delete current;
            _size--;
            return;
        }

        for (size_t i = 1; current != nullptr && i < location; i++) {
            current = current->_next;
        }

        if (current == NULL) {
            return;
        }
        if (current->_next == NULL) { _tail = current->_prev; }
        else { current->_next->_prev = current->_prev; }
        
        if (current->_prev != NULL) {
            current->_prev->_next = current->_next;
        }
        delete current;
        _size--;
    }

    Node* find(int location) {
        Node* current = _head;
        for (size_t i = 1; i < location; ++i) {
            current = current->_next;
        }
        return current;
    }
    Node* findbyvalue(T targetValue) {
        Node* current = _head; 
        while (current != NULL) {
            if (current->_value == targetValue) {
                return current; 
            }
            current = current->_next;
        }
        return NULL; 
    }
    void print() {
        Node* temp = _head;
        cout << "head ->";
        while (temp != NULL) {
            cout << temp->_value << " <-> ";
            temp = temp->_next;
        }
        cout << "NULL" << endl;
    }
    void revreseprint() {
        Node* temp = _tail;
        cout << "tail ->";
        while (temp != NULL) {
            cout << temp->_value << " <-> ";
            temp = temp->_prev;
        }
        cout << "NULL" << endl;
    }

    void reverse() {
        if (_head == nullptr || _head == _tail) return;

        Node* current = _head;
        Node* temp = nullptr;

        while (current != nullptr) {
            temp = current->_prev;
            current->_prev = current->_next;
            current->_next = temp;
            current = current->_prev; 
        }

        _tail = _head;
        if (temp != nullptr) {
            _head = temp->_prev;
        }
    }
    T& operator[] (int index) {
        
        if (index < 0 || index >= _size) {
            throw out_of_range("index error");
        }

        Node* current;
        if (index < _size / 2) {
            current = _head;
            for (int i = 0; i < index; i++) current = current->_next;
        }

        else {
            current = _tail;
            for (int i = _size - 1; i > index; i--) current = current->_prev;
        }
        return current->_value;
    }

    bool isEmpty() {
        return _size == 0;
    }

    size_t size() {
        return _size;
    }

    void clear() {
        Node* temp = _head;
        while (temp != NULL) {
            Node* nextNode = temp->_next;
            delete temp;
            temp = nextNode;
        }
        _head = _tail = NULL;
        _size = 0;
    }

    template<typename U> friend class Stack;
};



