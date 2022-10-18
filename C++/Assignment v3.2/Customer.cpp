#include "Customer.h"

Customer::Customer() {
	CustID = "";
	CustName = "";
	CustAddress = "";
	CustHPNo = "";
}

Customer::Customer(std::string i, std::string n, std::string a, std::string h) {
	CustID = i;
	CustName = n;
	CustAddress = a;
	CustHPNo = h;
}

std::string Customer::getCustID() {
	return CustID;
}

std::string Customer::getCustName() {
	return CustName;
}

std::string Customer::getCustAddress() {
	return CustAddress;
}

std::string Customer::getCustHPNo() {
	return CustHPNo;
}

void Customer::setCustID(std::string i) {
	CustID = i;
}

void Customer::setCustName(std::string n) {
	CustName = n;
}

void Customer::setCustAddress(std::string a) {
	CustAddress = a;
}

void Customer::setCustHPNo(std::string h) {
	CustHPNo = h;
}

