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
			head_ptr = NULL;
			tail_ptr = NULL;
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
			newNode->next = NULL; //NULL
			
			//insert elements as head			
			if (position == 1){
				newNode->next = head_ptr;
				head_ptr = newNode;	
				if (tail_ptr == NULL)	// empty list		
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
					tail_ptr = NULL;	
		    }  
			else{
					//Navigate to deleted node and keep track the node before deletion
					Node *prevPtr = NULL;
				
					for (int i=1 ;  i< position ; i++){
						prevPtr = delPtr;
						delPtr = delPtr->next;				
					}	
				    	
					prevPtr->next = delPtr->next;
				
					//change tail_ptr if it is the last node to be deleted
					if (delPtr->next == NULL){
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
		
		int getLast(){
			int last;
			Node *curr;
			curr = head_ptr;
			for( int i = 1; i<numOfItem; i++){
				curr = curr->next;
			}
			last = curr->item;
			return last;
		}
};


int main(){
	
	int temp;
	
	LinkedList oddList;
	LinkedList evenList;
	
	std::cout << "ENTER 10 NUMBERS\n";
	for(int i =0;i<10;i++){
	std::cin >> temp;
	if(temp%2 == 0){
		evenList.insert(1,temp);
	}
	else {
		oddList.insert(1,temp);
	}
}
	std::cout << "EVEN LIST: \n";
	evenList.displayAll();
	std::cout << "ODD LIST: \n";
	oddList.displayAll();

	std::cout << "AFTER REMOVE THE SECOND ITEM: \n";
	
	evenList.remove(2);
	oddList.remove(2);
	std::cout << "EVEN LIST: \n";
	evenList.displayAll();
	std::cout << "ODD LIST: \n";
	oddList.displayAll();
	
	std::cout << "LAST ITEM IN THE LIST" << std::endl;
	std::cout << "ODD LIST" << std::endl;
	std::cout << oddList.getLast();
	std::cout << "EVEN LIST" << std::endl;
	std::cout << evenList.getLast();


	
	return 0;
}
