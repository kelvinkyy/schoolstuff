/* Name: Kee Yong Yik
   Date and time: 7/5/2021 11.38a.m.
   purpose: simulate cashier using getline, setprecision, showpoint, fixed
   */
   
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	
	string itemName = " ";
	double price = 0, total = 0;
	int quantity = 0;
	
	
	cout << "Enter the product item name: ";
	getline(cin, itemName);
	
	cout <<  "Enter the unit price: ";
	cin >> price;
	
	cout << "Enter the quantity: ";
	cin >> quantity;
	
	cout << fixed << showpoint << setprecision(2);
	
	total = price * quantity;
	cout << "You have to pay " << total << " Ringgit ";
	
	return 0;
}
