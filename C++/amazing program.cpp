 #include <iostream>
 #include <string>
 
 using namespace std;
 
 struct Vegetable {
 	
 	string name;
 	double price;
 };
 
 struct Item{
 	
 	Vegetable vegetable;
 	int quantity;
 };
 
int main(){
	
	Item itemList[10];
	
	itemList[0].vegetable.name ="spinach";
	itemList[0].vegetable.price =2.5;
	itemList[0].quantity = 10;

	for (int i=0; i<10; i++){
		
		if (itemList[i].vegetable.price > 5)
		cout << itemList[i].vegetable.name << endl;
		
	}
	
	
	return 0;
}
