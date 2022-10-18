#include "CakeList.h"
#include <iostream>
#include <string>


CakeList::CakeList() {
	head_ptr = NULL;
	tail_ptr = NULL;
	numOfItem = 0;
}

bool CakeList::isEmpty() {
	if (numOfItem == 0)
		return true;
	return false;
}

int CakeList::size() {
	return numOfItem;
}

bool CakeList::insert(int position, Cake obj) {
	//position validation
	if (position > numOfItem + 1 || position < 1) {
		return false;
	}
	// create new node
	CakeNode* newNode = new CakeNode;
	newNode->data = obj;
	newNode->next = NULL; //NULL

	//insert elements as head
	if (position == 1) {
		newNode->next = head_ptr;
		head_ptr = newNode;
		if (tail_ptr == NULL)	// empty list
			tail_ptr = newNode;
	} else {
		CakeNode* curr = head_ptr;
		//navigate elements to a node before the insertion point
		for (int i = 1; i < position - 1; i++)
			curr = curr->next;
		//insert the new element in the list
		newNode->next = curr->next;
		curr->next = newNode;

		//change tail_ptr if insert as last node
		if (position == numOfItem + 1) {
			tail_ptr = newNode;
		}
	}

	numOfItem += 1;
	return true;

}

bool CakeList::remove(int position) {
	if (isEmpty() || position > numOfItem || position < 1) {
		return false;
	}

	//delete ptr start from 1st node
	CakeNode* delPtr = head_ptr;



	if (position == 1) {

		head_ptr = head_ptr->next;

		if (numOfItem == 1)	// if this is the only item in the list
			tail_ptr = NULL;
	} else {
		//Navigate to deleted node and keep track the node before deletion
		CakeNode* prevPtr = NULL;

		for (int i = 1; i < position; i++) {
			prevPtr = delPtr;
			delPtr = delPtr->next;
		}

		prevPtr->next = delPtr->next;

		//change tail_ptr if it is the last node to be deleted
		if (delPtr->next == NULL) {
			tail_ptr = prevPtr;
		}

	}

	//remove the node point by delptr

	delete delPtr;

	numOfItem--;
	return true;
}

int CakeList::getNumOfItem() {
	return numOfItem;
}


bool CakeList::displayAll() {
	CakeNode* curr;
	Cake temp;
	curr = head_ptr;
	while (curr != NULL) {
		temp = curr->data;
		
		std::cout << std::endl<< std::endl;
		std::cout << "---------- Cake Details -------------" << std::endl;
		std::cout << "Cake Flavour : " << temp.getFlavour() << std::endl;
		std::cout << "Cake Code    : " << temp.getCakeCode() << std::endl;
		std::cout << "Weight       : "  << temp.getWeight() << " g" << std::endl;
		std::cout << "Unit Price   : RM" << temp.getUnitPrice() << std::endl;
		std::cout << "-------------------------------------";
		
		curr = curr->next;

	}
	return true;
}


Cake CakeList::getCurrNode(int position){

	//if(position > numOfItem){
	//	return false ;
	//}
	//else{
	CakeNode *curr = head_ptr;
	for(int i =1; i < position; i++){                         
		curr = curr->next;		
	}
	
	return curr->data;
	
}



