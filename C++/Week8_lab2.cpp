#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct coffee{
  string name;
  double price;
};

void inputCoffee(coffee &c1){
	
	cout << "Enter coffee name: " << endl;
	getline(cin,c1.name);
	
	cout << "Enter price: " << endl;
	cin >> c1.price;
}

void printCoffee(coffee c1){
	
	cout << "coffee name: ";
	cout << c1.name << endl;
	
	cout << "coffee price: ";
	cout << c1.price << endl;
}
int main(){
	
	coffee c1;
	
	inputCoffee(c1);
	printCoffee(c1);
	
	
	return 0;
}
