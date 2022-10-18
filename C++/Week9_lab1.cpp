#include <iostream>
#include <string>

using namespace std;

struct Product {
	
	string productID;
	string productName;
	double price;
};

const int PRODUCT_SIZE = 5;

void printMenu() {
	
	cout << "1-> Show Products" << endl;
	cout << "2-> Check Discount Rate" << endl;
	cout << "3-> Exit" << endl;
	cout << "Enter option" << endl;
}

void printProducts(const Product products[]);
void checkDiscount();

int main(){
	int option = 0;
	
	Product products [PRODUCT_SIZE] = {
	                                    {"P111","Pen",1.5},
	                                    {"P222","ERASER",1.5},
										{"P333","Pencil Case",10.6},
										{"P444", "Notebook", 3.2},
										{"P555", "Glue", 4.5}
										};
	
	do {
	printMenu();
	cin >> option; }
	while (option !=3);
	
	switch (option) {
		
		case 1: {
			printProducts(products);
			break;
		}
		case 2: {
			int id = 0;
			cout << "enter product id" << endl;
			cin >> id;
			for (int i = 0; i < PRODUCT_SIZE; i++) {
				if (id == products[1].productID){
					id == i;
					break;
				}
			}
			if (i == -1)
			cout << "Record id not found in the inventory!" << endl;
			else{
				cout << "Product details" << endl;
				cout << "=====================" << endl;
				cout << products[id].name <<"\t\t" << products[id].price << endl;
			}
			break;
		}
		case 3: {
			cout << "Thank you for using our system" << endl;
			cout << "The system is about to go end. Bye" << endl;
			break;
		}
		default: {
			cout << "Invalid option!" << endl;
			cout << "Please enter an option in the range 1 to 3" << endl;
			break;
		}
	}
	
	return 0;
	}

void printProducts(const Product products[]){
	cout << "\n***************Product List***************" << endl << endl;
	
	for (int i = 0; i<PRODUCT_SIZE; i++) {
		cout << products[i].productID << "\t\t" << products[1].productName << products[1].price << endl;
	}
void checkDiscount(string id){
}
}
