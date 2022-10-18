#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

class Customer
{
private:
	std::string CustID;
	std::string CustName;
	std::string CustAddress;
	std::string CustHPNo;

public:
	Customer();
	Customer(std::string, std::string, std::string, std::string);

	std::string getCustID();
	std::string getCustName();
	std::string getCustAddress();
	std::string getCustHPNo();

	void setCustID(std::string);
	void setCustName(std::string);
	void setCustAddress(std::string);
	void setCustHPNo(std::string);

};

#endif
