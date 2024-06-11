#ifndef DEQUE_H
#define DEQUE_H

#include "DequeEmpty.h"

template <typename E>
class Deque {
    public:
        Deque();
        ~Deque();
        void insertFront(const E& e);
        void insertBack(const E& e);
        void eraseFront(); 
        void eraseBack(); 
        const E& front() const; 
        const E& back() const; 
        int size() const;
        bool empty() const;
    private:
        struct Node {
            E elem;
            Node* next;
            Node* prev;
        };
        Node* head;
        Node* tail;
        int numEntries;
    protected:
        void add(Node* v, const E& e);
        void erase(Node* v);
};
#endif
