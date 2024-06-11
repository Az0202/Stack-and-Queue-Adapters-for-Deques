#ifndef STACK_H
#define STACK_H
#include "Deque.h"
#include <iostream>
#include "StackEmptyException.h"
using namespace std;

template <typename E>
class Stack {
public:
	Stack();			//constructor
	~Stack();			//destructor
	void push(const E& e);
	void pop(); 
	const E& top() const ;
	int size () const;
	bool empty() const; 
private:
	Deque<E> D;
};

#endif
