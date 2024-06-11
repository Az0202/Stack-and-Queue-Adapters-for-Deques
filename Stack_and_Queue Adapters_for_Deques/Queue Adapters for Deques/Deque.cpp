#include "Deque.h"

template <typename E>
Deque<E>::Deque() {
    head = new Node;
    tail = new Node;
    head->next = tail;
    tail->prev = head;
    numEntries = 0;
  }

template <typename E>
Deque<E>::~Deque() {
    while (!empty()) eraseFront();
    delete head;
    delete tail;
}

template <typename E>
bool Deque<E>::empty() const {
    return (head->next == tail); 
}

template <typename E>
const E& Deque<E>::front() const {
    return head->next->elem; 
}

template <typename E>
const E& Deque<E>::back() const {
    return tail->prev->elem; 
}
  
template <typename E>
void Deque<E>::add(Node* v, const E& e) {
    Node* u = new Node;  u->elem = e;
    u->next = v;
    u->prev = v->prev;
    v->prev->next = u;
    v->prev = u;
    numEntries++;
 }

template <typename E>
void Deque<E>::insertFront(const E& e) {
    add(head->next, e); 
}

template <typename E>  
void Deque<E>::insertBack(const E& e) {
    add(tail, e); 
}

template <typename E>
void Deque<E>::erase(Node* v) {
    Node* u = v->prev;
    Node* w = v->next;
    u->next = w;
    w->prev = u;
    delete v;
    numEntries--;
}

template <typename E>
void Deque<E>::eraseFront()	{
    erase(head->next); 
}

template <typename E>  
void Deque<E>::eraseBack() {
    erase(tail->prev); 
}

template <typename E>
int Deque<E>::size() const{
    return numEntries;
}