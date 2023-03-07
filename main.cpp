// Lorrell Winfield
// Assignment 2

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
    int num = 0;
    LinkedList mylist; // create linked list

    mylist.push_front(1); // add to linked list 
    mylist.push_front(8);
    mylist.push_back(6);
   
    mylist.front_back(); // display front and back data

    mylist.printlist(); // print all contents of list

    mylist.pop_front(); 
    mylist.pop_back();
    cout << "after popfront and popback fucntions execute" << endl;
    mylist.printlist(); // print all contents of list






}
