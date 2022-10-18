#include <iostream>

struct Node{
			int item;
			Node *next;
};
class LinkedList{
	private:
	   
		
		Node *head_ptr;
		Node *tail_ptr;
		int numOfItem;	
		
		
	public:
		LinkedList(){
			head_ptr = nullptr;
			tail_ptr = nullptr;
			numOfItem = 0;
		}
		
		bool isEmpty(){
			if (numOfItem == 0) 
				return true;
		    return false;			
		}
		
		int size(){
			return numOfItem;
		}
		
		bool insert(int position,int data){
			//position validation
			if (position > numOfItem + 1 || position < 1){
				return false;
			}
			// create new node
			Node *newNode = new Node;
			newNode->item = data;
			newNode->next = nullptr; //NULL
			
			//insert elements as head			
			if (position == 1){
				newNode->next = head_ptr;
				head_ptr = newNode;	
				if (tail_ptr == nullptr)	// empty list		
				    tail_ptr = newNode;											
			}
			else{
				Node *curr = head_ptr;
				//navigate elements to a node before the insertion point
				for (int i=1;i<position-1;i++)
				   curr = curr->next;
				//insert the new element in the list
				newNode->next = curr->next;
				curr->next = newNode;
				
				//change tail_ptr if insert as last node
				if (position == numOfItem+1){
					tail_ptr = newNode;
				}
			}
			
			numOfItem +=1;
			return true;
			
		}

		
		
		bool remove(int position){
			//validate position
			if (isEmpty() || position > numOfItem || position < 1) {
			    return false;
			}
				
			//delete ptr start from 1st node
			Node *delPtr = head_ptr;
			
			
		
			if (position == 1){
			
				head_ptr = head_ptr->next;				
				
				if (numOfItem == 1)	// if this is the only item in the list			
					tail_ptr = nullptr;	
		    }  
			else{
					//Navigate to deleted node and keep track the node before deletion
					Node *prevPtr = nullptr;
				
					for (int i=1 ;  i< position ; i++){
						prevPtr = delPtr;
						delPtr = delPtr->next;				
					}	
				    	
					prevPtr->next = delPtr->next;
				
					//change tail_ptr if it is the last node to be deleted
					if (delPtr->next == nullptr){
						tail_ptr = prevPtr;
					}
				
			}
					
			//remove the node point by delptr
			
			delete delPtr;
			
			numOfItem--;
			return true;
		} 
		
		
		bool displayAll(){
			Node *curr;
			curr = head_ptr;			
			while (curr != NULL){
				std::cout << curr->item <<std::endl;
				curr = curr->next;				
			}				
		}
};


int main(){
	
	int data;
	
	LinkedList a;
	
	a.insert(1,200);
	a.insert(2,200);
	a.insert(2,300);	

	a.displayAll();  
	  
	a.remove(1);			

    a.displayAll();

	
	return 0;
}
