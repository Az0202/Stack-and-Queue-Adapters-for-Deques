#include <iostream>
#include "Stack.h"

int main() {
    Stack<string> S;

    S.push("Gamo");
    S.push("Yoshi");
    S.push("Naoto");
    S.push("Ay");

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
    S.pop();
}