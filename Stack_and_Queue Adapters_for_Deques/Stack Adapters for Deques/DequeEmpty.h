#ifndef DEQUEEMPTY_H
#define DEQUEEMPTY_H
#include <stdexcept>
#include <string>

using namespace std;

class DequeEmpty : public runtime_error {
    public:
        DequeEmpty(const string& err) : runtime_error(err) {}
};

#endif