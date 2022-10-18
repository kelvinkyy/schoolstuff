#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Order.h"

struct Node {
	Order data;
	Node* next;
};

class LinkedList {

private:

	Node* head_ptr;
	Node* tail_ptr;
	int numOfItem;


public:
	
	LinkedList();
	bool isEmpty();
	int size();
	bool insert(int, Order);
	bool remove(int);
	Node* getHeadPointer();
	int getNumOfItem();
	bool displayAll();
	bool checkList(std::string);
	Order getCurrNode(int);
};


#endif
