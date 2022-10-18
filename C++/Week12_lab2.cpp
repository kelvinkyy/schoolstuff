#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

struct Item{
	int id;
	char name[80];
	double price;
};

void showItem(Item item){
	
	cout << "item id " << item.id << endl;
	cout << "item name " << item.name << endl;
	cout << "item price " << item.price << endl;
}

int main(){
	
	Item item;
	int count =0;
	fstream file("item.dat",ios::in | ios::binary);
	
	if(!file){
		cout << "unable to open item.dat. Program aborted";
		return 0;
	}
	
	cout << "Stock item list" << endl;
	file.read(reinterpret_cast<char*>(&item),sizeof(item));
	
	while(!file.eof()) { // while not end of file
		
	count++;
	cout << "item"<< count << endl;
	showItem(item);
	//read the next record
	file.read(reinterpret_cast<char*>(&item),sizeof(item));
}
cout << "End of file.." << endl;
	file.close();
	
	return 0;
}
