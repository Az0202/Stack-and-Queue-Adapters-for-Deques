# Stack-and-Queue-Adapters-for-Deques
## Project Description
This project implements generic adapter classes for Stack and Queue abstract data types (ADTs) using a Deque. The adapters allow for flexible back-end implementations of Stacks and Queues, either through array-based or linked-list-based Deques, providing efficient operations typical of these data structures.

## Structure

The project is divided into two main parts:
- `StackAdapter/`
  - `Stack.h`
  - `Stack.cpp`
  - `StackExpand.cpp`
- `QueueAdapter/`
  - `Queue.h`
  - `Queue.cpp`
  - `QueueExpand.cpp`
- `Common/`
  - `Deque.h`
  - `Deque.cpp`
  - `DequeExpand.cpp`
  - `DequeEmpty.h`
  - `StackEmptyException.h`
  - `QueueEmptyException.h`

## Implementation Details

* Stack Adapter
The Stack is implemented using the Deque class's insertFront and eraseFront methods for pushing and popping elements, respectively. The top of the stack is the front of the deque.

* Queue Adapter
The Queue utilizes the insertBack to enqueue and eraseFront to dequeue, maintaining the front of the queue as the front of the deque.

* Deque
The Deque is a double-ended queue which supports operations at both ends. It serves as the underlying data structure for both the Stack and Queue adapters.
