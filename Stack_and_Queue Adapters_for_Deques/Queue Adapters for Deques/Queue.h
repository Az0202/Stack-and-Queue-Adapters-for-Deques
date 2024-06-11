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
	void dequeue(); //throw(QueueEmpty);  
	const E& front() const; //throw(QueueEmpty); //we don't have this function or this name of this function on Queues but we have it in Deque. wehave insed "head()"
	int size () const; 
	bool empty() const; 
private:
	Deque<E> D;
};

#endif