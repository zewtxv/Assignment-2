// Zeke White
// zewtxv@umsytem.edu
//
#include <string>
#ifndef ASSIGNMENT_2_SINGLELINKEDLIST_H
#define ASSIGNMENT_2_SINGLELINKEDLIST_H
template <typename T>
class SingleLinkedList {

private:
    struct Node {
        T data;
        Node* next;

        Node(const T& data_item, Node* next_ptr = nullptr)
                : data(data_item), next(next_ptr) {}
    };

    Node* head;
    Node* tail;
    size_t num_items;

public:
    // constructor
    SingleLinkedList() : head(nullptr), tail(nullptr), num_items(0) {}

    // destructor
    ~SingleLinkedList();

    // copy constructor
    SingleLinkedList(const SingleLinkedList& other);

    // push_front function
    void push_front(const T& item);

    // push_back function
    void push_back(const T& item);

    // pop_front function
    void pop_front();

    // pop_back function
    void pop_back();

    // front function
    T& front();

    // back function
    T& back();

    // empty function
    bool empty() const;

    // insert function
    void insert(size_t index, const T& item);

    // remove function
    bool remove(size_t index);

    // find function
    size_t find(const T& item) const;
};
#endif //ASSIGNMENT_2_SINGLELINKEDLIST_H
