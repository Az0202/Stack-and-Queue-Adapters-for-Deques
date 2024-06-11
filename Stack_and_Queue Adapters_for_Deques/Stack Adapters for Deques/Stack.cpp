#include "Stack.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include "StackEmptyException.h"
template <typename E>
Stack<E>::Stack() : D() { } // The Constructor

template <typename E>
Stack<E>::~Stack() {D.~Deque(); } //Call the Deque destructor 

template <typename E>
int Stack<E>::size() const {  // number of elements
    return D.size();
    }

template <typename E>
bool Stack<E>::empty() const {  
    return D.empty();
    }

template <typename E>
const E& Stack<E>::top() const{ 
    if (empty())
        throw StackEmpty("top of empty stack"); 
    return D.front();
}

template <typename E>
void Stack<E>::push(const E& e) {   // push element onto stack 
    D.insertFront(e); 
}


template <typename E>
void Stack<E>::pop(){      //pop the stack
    if (empty())
        throw StackEmpty("pop of empty stack");
    D.eraseFront();
}
