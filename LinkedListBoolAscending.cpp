/*
 Created by: Michael Busslinger
 Using: Xcode
 Written in: C++ Language
*/

//
// EDIT THIS FILE ONLY FOR YOUR OWN TESTING
// *** Will need LinkedListBoolAscending.h for this to work ***
//

/*
        This program uses Integer Linked Lists to test for ascending order.
        Since this is a linked list, the ascending order is reversed from
        the arrayBoolAscending.cpp file which uses a simple array.
 
        The program will return "1" if the linked list is ascending order.
        If it is not in ascending order, the linked list will return "0".
*/

#include <iostream>
#include <string>
#include "LinkedListBoolAscending.h"

using namespace std;

int main() {
	IntegerLinkedList mylist;
	cout << "Enter number of integers : ";
	int n, value;
	cin >> n;
	cout << "Enter " << n << " integers" << endl;
	for (int i = 0; i < n; i++) {
		cin >> value;
		mylist.addFront(value);
	}

	cout << "isAscending: " << mylist.isAscending() << endl;
}
