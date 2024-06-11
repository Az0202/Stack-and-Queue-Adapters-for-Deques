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
        void eraseFront(); //Throw(DequeEmpty)
        void eraseBack(); //Throw(DequeEmpty)
        const E& front() const; //Throw(DequeEmpty)
        const E& back() const; //Throw(DequeEmpty)
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