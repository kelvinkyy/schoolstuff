#include "LinkedList.h"
#include <iostream>
#include "Order.h"
#include <string>


LinkedList::LinkedList() {
	head_ptr = NULL;
	tail_ptr = NULL;
	numOfItem = 0;
}

bool LinkedList::isEmpty() {
	if (numOfItem == 0)
		return true;
	return false;
}

int LinkedList::size() {
	return numOfItem;
}

bool LinkedList::insert(int position, Order obj) {
	//position validation
	if (position > numOfItem + 1 || position < 1) {
		return false;
	}
	// create new node
	Node* newNode = new Node;
	newNode->data = obj;
	newNode->next = NULL; //NULL

	//insert elements as head
	if (position == 1) {
		newNode->next = head_ptr;
		head_ptr = newNode;
		if (tail_ptr == NULL)	// empty list
			tail_ptr = newNode;
	} else {
		Node* curr = head_ptr;
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

bool LinkedList::remove(int position) {
	if (isEmpty() || position > numOfItem || position < 1) {
		return false;
	}

	//delete ptr start from 1st node
	Node* delPtr = head_ptr;



	if (position == 1) {

		head_ptr = head_ptr->next;

		if (numOfItem == 1)	// if this is the only item in the list
			tail_ptr = NULL;
	} else {
		//Navigate to deleted node and keep track the node before deletion
		Node* prevPtr = NULL;

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

int LinkedList::getNumOfItem() {
	return numOfItem;
}


bool LinkedList::displayAll() {
	Node* curr;
	Order temp;
	curr = head_ptr;
	while (curr != NULL) {
		temp = curr->data;
		std::cout << temp.getOrderID() << std::endl;
		curr = curr->next;

	}
	return true;
}


//run this everytime when a new OrderID is generated
bool LinkedList::checkList(std::string orderid) {
	Order ordertemp;
	bool repeat = false;
	if (numOfItem == 0) {
		return repeat;
	} else {
		Node *curr = head_ptr;
		while(curr->next != NULL) {
			ordertemp = curr->data;
			if(ordertemp.getOrderID() == orderid) {
				repeat = true;
				break;
			}
			curr = curr->next;
		}
	}

	return repeat;
}

Order LinkedList::getCurrNode(int position){
	
	//if(position > numOfItem){
	//	return false ;
	//}
	//else{
		Node *curr = head_ptr;
	for(int i =1; i < position; i++){
		curr = curr->next;		
	}
	
	return curr->data;};
	

