#ifndef STACKEMPTYEXCEPTION_H
#define STACKEMPTYEXCEPTION_H

#include <stdexcept>
#include <string>

using namespace std;

// Exception thrown on performing top or pop of an empty stack.
class StackEmpty : public runtime_error {  
    public:
        StackEmpty(const string& err) : runtime_error(err) {}
};

#endif /* STACKEMPTYEXCEPTION_H */