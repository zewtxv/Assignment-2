// Zeke White
// zewtxv@umsytem.edu
//
#include <string>
#ifndef ASSIGNMENT_2_SINGLELINKEDLIST_H
#define ASSIGNMENT_2_SINGLELINKEDLIST_H
struct Item_Type {
    int size;
};

struct Node {
    Item_Type item;
    Node* next;
};

class SingleLinkedList {
public:
    SingleLinkedList();
    SingleLinkedList(Item_Type item);
    void printSingleLinkedList();

    void push_front(Item_Type item);
    void push_back(Item_Type item);
    void pop_front();
    void pop_back();
    Node* front() { return head; }
    Node* back() { return tail; }
    bool isEmpty();
    void insert(size_t index, const Item_Type& item);
    bool remove(size_t index);
    size_t find(const Item_Type& item);

    int getNumItems() { return numItems; }
private:
    Node* head;
    Node* tail;
    int numItems = 0;
};
#endif //ASSIGNMENT_2_SINGLELINKEDLIST_H
