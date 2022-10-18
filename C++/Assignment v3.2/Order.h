#ifndef ORDER_H
#define ORDER_H
#include <string>
#include "Customer.h"
#include "Cake.h"
#include "CakeList.h"

class Order
{
private:
	std::string OrderID;
	double Amount;
	int Qty;



public:
	Customer Cust;
	CakeList Cakes;


	//Constructor
	Order();
	Order(std::string, double, int, Customer);

	//Getter
	std::string getOrderID();
	int getQty();
	double getAmount();

	//Setter
	void setOrderID(std::string);
	void setQty(int);
	void setAmount(double);

	generateOrderID();

};

#endif
	
