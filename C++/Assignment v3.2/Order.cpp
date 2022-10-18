#include "Order.h"
#include "Customer.h"
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;
//Constructor
Order::Order() {
	OrderID = "";
	Amount = 0.0;
	Qty = 0;
	Cust = Customer("", "", "", "");
	
}

//Overloaded Constuctor
Order::Order(std::string o, double a,int q , Customer Cust) {
	OrderID = o;
	Amount = a;
	Qty = q;
	this->Cust = Cust;

}

//Getter

std::string Order::getOrderID() {
	return OrderID;
}

double Order::getAmount() {
	return Amount;
}

int Order::getQty() {
	return Qty;
}

//Setters
void Order::setOrderID(std::string o) {
	OrderID = o;
}

void Order::setAmount(double a){
	Amount = a;
}

void Order::setQty(int q) {
	Qty = q;
}


Order::generateOrderID(){
	
    string temp;
	stringstream string_object_name;
	int random;
	random = rand() % 10000 + 9999;
	
	string_object_name << random;
	string_object_name >> temp;
	
	OrderID = "A" + temp;
	
}







