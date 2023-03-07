#include "pch.h"
#include <iostream>
using namespace std;

Node::Node(int value) { // intialize values and set next to nullptr
    data = value;
    next = nullptr;
}

LinkedList::LinkedList() { // intialize values with nullptr and set num items = 0
	head = nullptr;
	tail = nullptr;
	int num_items = 0;
}

void LinkedList::push_front(int data) {
    Node* new_node = new Node(data);      // Create a new node with the given data
    new_node->next = head;
    head = new_node;
    if (tail == nullptr) {       // If the list was previously empty, update the tail to point to the new node
        tail = new_node;
    }
    num_items++;
}

void LinkedList::push_back(int data) {
    Node* new_node = new Node(data);
    if (tail == nullptr) {
        // List is empty, so new node is both head and tail
        head = new_node;
        tail = new_node;
    }
    else {
        // List is not empty, so append new node to the end
        tail->next = new_node;
        tail = new_node;
    }
    num_items++;
}

void LinkedList::pop_front() {
    if (head == nullptr) {
        // List is empty, so there's nothing to remove
        return;
    }
    else if (head == tail) {
        // List contains only one node, so remove it
        delete head;
        head = nullptr;
        tail = nullptr;
    }
    else {
        // List contains multiple nodes, so remove the first one
        Node* old_head = head;
        head = head->next;
        delete old_head;
    }
    num_items--;
}

void LinkedList::pop_back() {
    if (tail == nullptr) {
        // List is empty, so there's nothing to remove
        return;
    }
    else if (head == tail) {
        // List contains only one node, so both head and tail must be updated
        delete tail;
        head = nullptr;
        tail = nullptr;
    }
    else {
        // List contains multiple nodes, so traverse to second-to-last node
        Node* current = head;
        while (current->next != tail) {
            current = current->next;
        }
        delete tail;
        tail = current;
        tail->next = nullptr;
    }
    num_items--;
}

void LinkedList::front_back() {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
    }
    else {
        cout << "The data value at the front of the list is: " << head->data << endl;
        cout << "The data value at the back of the list is: " << tail->data << endl;
    }
}

bool LinkedList::empty() {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
        return head = nullptr;
    }
    else { 
        cout << "The list is not empty." << endl;
    return head != nullptr;
    }
       
}

void LinkedList::insert(size_t index, const int& item) {
    if (index > num_items) {     
                                // If index is greater than the number of items, append to the end
        push_back(item);
    }
    else if (index == 0) {        // If index is 0, insert at the front

        push_front(item);
    }
    else {
        Node* current = head;
        for (size_t i = 0; i < index - 1; i++) {
            current = current->next;
        }
        Node* new_node = new Node(item);
        new_node->next = current->next;
        current->next = new_node;
        num_items++;
    }
}

bool LinkedList::remove(size_t index) {
    if (index >= num_items) {
        // index is beyond the end of the list
        return false;
    }

    Node* current = head;
    Node* previous = nullptr;

    // Traverse the list to find the node at the specified index
    for (size_t i = 0; i < index; i++) {
        previous = current;
        current = current->next;
    }

    if (previous == nullptr) {
        // Removing the head node
        head = current->next;
        if (head == nullptr) {
            // The list is now empty
            tail = nullptr;
        }
    }
    else {
        // Removing a non-head node
        previous->next = current->next;
        if (previous->next == nullptr) {
            // Removing the tail node
            tail = previous;
        }
    }

    delete current;
    num_items--;
    return true;
}

size_t LinkedList::find(const int& item) {
    Node* current = head;
    size_t index = 0;
    while (current != nullptr) {
        if (current->data == item) {
            return index;
        }
        else {
            current = current->next;
            index++;
        }
    }
    return num_items;
}

void LinkedList::printlist() {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}