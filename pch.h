#pragma once

struct Node {
	int data;
	Node* next;
	Node(int data);
};

class LinkedList {
private:
	Node* head;
	Node* tail;
	int num_items;
public:
	LinkedList();

	// Methods for adding and removing nodes from the front and back of the list
	void push_front(int data);
	void push_back(int data);
	void pop_front();
	void pop_back();
	
	void front_back();// method to print values at front and back of Linked List

	bool empty(); // Method for checking if the list is empty

	bool remove(size_t index); // Method for removing a node at a specified index


	void insert(size_t index, const int& item); // Method for inserting a node at a specified index


	size_t find(const int& item); // Method for finding the index of a node with a specified data value


	void printlist(); // Method for printing the data values of all nodes in the list

};

