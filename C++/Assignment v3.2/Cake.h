#ifndef CAKE_H
#define CAKE_H
#include<string>

class Cake
{
private:
	int CakeCode;
	std::string Flavour;
	double Weight;
	double UnitPrice;

public:
	Cake();
	Cake(int, std::string,double,double);

	int getCakeCode();
	std::string getFlavour();
	double getWeight();
	double getUnitPrice();
	
	void setCakeCode(int);
	void setFlavour(std::string);
	void setWeight(double);
	void setUnitPrice(double);
};

#endif
