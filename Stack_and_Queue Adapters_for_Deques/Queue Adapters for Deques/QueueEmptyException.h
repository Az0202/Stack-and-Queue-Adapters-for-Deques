#ifndef QUEUEEMPTYEXCEPTION_H
#define QUEUEEMPTYEXCEPTION_H

#include <stdexcept>
#include <string>

using namespace std;

// Exception thrown on performing top or pop of an empty Queue.
class QueueEmpty : public runtime_error {  
    public:
        QueueEmpty(const string& err) : runtime_error(err) {}
};

#endif /* QUEUEEMPTYEXCEPTION_H */