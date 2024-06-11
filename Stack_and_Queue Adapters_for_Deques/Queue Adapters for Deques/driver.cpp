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

   /*S.push("Gamo");
    S.push("Yoshi");
    S.push("Naoto");
    S.push("Nagatoro");

    cout << S.top() << endl;
    cout << S.size() << endl;
    cout << "" << endl;

    S.pop();
    S.pop();

    cout << S.top() << endl;
    cout << S.size() << endl;
    cout << "" << endl;

    S.pop();
    S.pop();
    S.pop(); */