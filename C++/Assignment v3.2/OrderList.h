#ifndef ORDERLIST_H
#define ORDERLIST_H
#include "Order.h"

struct Node {
	Order data;
	Node* next;
};

class OrderList {

private:

	Node* head_ptr;
	Node* tail_ptr;
	int numOfItem;


public:
	
	OrderList();
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
