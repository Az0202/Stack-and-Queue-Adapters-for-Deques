#ifndef QUEUE_H
#define QUEUE_H
#include "Deque.h"
#include "QueueEmptyException.h"
#include <iostream>
using namespace std;

template <typename E>
class Queue {
public: 
	Queue();			//constructor
	~Queue();			//destructor
	void enqueue(const E& e);
	void dequeue(); 
	const E& front() const; 
	int size () const; 
	bool empty() const; 
private:
	Deque<E> D;
};

#endif
