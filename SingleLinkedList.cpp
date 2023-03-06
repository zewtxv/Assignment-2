// Zeke White
// zewtxv@umsytem.edu


#include "SingleLinkedList.h"
#include <stdexcept>

// destructor
template <typename T>
SingleLinkedList<T>::~SingleLinkedList() {
    while (!empty()) {
        pop_front();
    }
}

// copy constructor
template <typename T>
SingleLinkedList<T>::SingleLinkedList(const SingleLinkedList& other) {
    head = nullptr;
    tail = nullptr;
    num_items = 0;
    Node* other_node = other.head;
    while (other_node != nullptr) {
        push_back(other_node->data);
        other_node = other_node->next;
    }
}

// push_front function
template <typename T>
void SingleLinkedList<T>::push_front(const T& item) {
    head = new Node(item, head);
    if (num_items == 0) {
        tail = head;
    }
    ++num_items;
}

// push_back function
template <typename T>
void SingleLinkedList<T>::push_back(const T& item) {
    Node* new_node = new Node(item, nullptr);
    if (num_items == 0) {
        head = new_node;
    } else {
        tail->next = new_node;
    }
    tail = new_node;
    ++num_items;
}

// pop_front function
template <typename T>
void SingleLinkedList<T>::pop_front() {
    if (empty()) {
        throw std::out_of_range("List is empty");
    }
}