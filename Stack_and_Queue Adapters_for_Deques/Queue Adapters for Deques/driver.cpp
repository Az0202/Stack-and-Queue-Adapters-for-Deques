#include <iostream>
#include "Queue.h"

int main() {
    Queue<string> S;
    //cout<< S.front() << endl;
    S.enqueue("Gamo");
    S.enqueue("Yoshi");
    S.enqueue("Naoto");
    S.enqueue("Nagatoro");
    cout<< S.front() << endl;
    cout << S.size() << endl;
    cout << "" << endl;
    S.dequeue();
    S.dequeue();
    S.dequeue();
    S.dequeue();
    cout << S.front() << endl;
    cout << S.size() << endl;
    cout << "" << endl;

}
