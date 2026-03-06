#pragma once
#include <iostream>

using namespace std;

template<typename T>
class doublyLinkedList {
private:
    struct Node {
        T _value =0 ;
        Node* _prev;
        Node* _next;
        Node() : _next(nullptr), _prev(nullptr) {}
    };
    
    size_t _size = 0;
    Node* _head;
    Node* _tail;
 
public:
    doublyLinkedList() : _head(NULL), _tail(NULL) {}


    void insert(int location, T val) {
        if (_head == NULL && location > 1) {
            return;
        }

        if (location == 1) {
            Node* newNode = new Node();
            newNode->_value = val;
            newNode->_prev = NULL;
            newNode->_next = _head;
            _head = newNode;
            if (newNode->_next == NULL) _tail = _head;
            _size++;
            return;
        }

        Node* current = _head;
        for (size_t i = 1; i < location - 1 && current != NULL; ++i) {
            current = current->_next;
        }
        if (current == NULL) return;
        
        Node* newnode = new Node();
        _size++;

        if (current->_next == NULL) _tail = newnode;
        else { current->_next->_prev = newnode; }
        
        newnode->_next = current->_next;

        newnode->_prev = current;
        current->_next = newnode;

        newnode->_value = val;

    }
    void remove(int location) {
        if (_head == NULL) {
            return;
        }

        Node* current = _head;
        if (location == 1) {
            if (current->_next == NULL) {
                _head = NULL;
                _tail = NULL;
                delete current;
                return;
            }
            _head = current->_next;
            _head->_prev = NULL;
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
        
        current->_prev->_next = current->_next;
        
        delete current;
        _size--;
    }

    Node* find(T targetValue) {
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
};



