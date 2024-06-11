#include "Queue.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include "QueueEmptyException.h"

template <typename E>
Queue<E>::Queue() : D() { } //The Constructor

template <typename E>
Queue<E>::~Queue() {D.~Deque(); } 

//Gets the front of the Queue
template <typename E>
const E& Queue<E>::front() const { 
    if (empty()){
        throw QueueEmpty("top of empty Queue");
    }
    return D.front();
}

// number of elements
template <typename E>
int Queue<E>::size() const {  
    return D.size();
    }

// is the Queue empty?
template <typename E>
bool Queue<E>::empty() const {  
    return D.empty();
    }

template <typename E>
void Queue<E>::enqueue(const E& e){
    D.insertBack(e);
}

template <typename E>
void Queue<E>::dequeue(){ 
    if (empty()) {
        throw QueueEmpty("top of empty Queue");
    }
    D.eraseFront();}
