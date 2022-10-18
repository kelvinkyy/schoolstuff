#ifndef CAKELIST_H
#define CAKELIST_H
#include "Cake.h"

struct CakeNode {
	Cake data;
	CakeNode* next;
};

class CakeList {

private:

	CakeNode* head_ptr;
	CakeNode* tail_ptr;
	int numOfItem;


public:
	CakeList();
	bool isEmpty();
	int size();
	bool insert(int, Cake);
	bool remove(int);
	CakeNode* getHeadPointer();
	int getNumOfItem();
	bool displayAll();
	Cake getCurrNode(int);
};


#endif

