/*
 Created by: Michael Busslinger
 Using: Xcode
 Written in: C++ Language
*/

// *** This file is required for LinkedListBoolAscending.cpp ***

/*
 This program uses Integer Linked Lists to test for ascending order.
 Since this is a linked list, the ascending order is reversed from
 the arrayBoolAscending.cpp file which uses a simple array.
 
 The program will return "1" if the linked list is ascending order.
 If it is not in ascending order, the linked list will return "0".
*/

#pragma once

class SNode {
public:
  int elem;
  SNode *next;
};

class IntegerLinkedList {
private:
  SNode *head;
public:
  IntegerLinkedList() {
    head = nullptr;
  }
  
  void addFront(int x) {
    SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
  }
  
  bool isAscending(){
      bool status = true;
      while (head->next != nullptr)
      {
        if (head->elem > head->next->elem)
        {
            status = false;
            //std::cout << head->elem << " " << head->next->elem;           //Error Check to see what's causing failure
            return status;
        }
        else
        {
            head = head->next;
            status = true;
        }
      }
      return status;
  };

};
