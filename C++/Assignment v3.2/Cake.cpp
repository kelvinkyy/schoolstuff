#include "Cake.h"
#include <iostream>

Cake::Cake() {
	CakeCode = 0;
	Flavour = "";
	Weight = 0.0;
	UnitPrice = 0.0;
}

Cake::Cake(int c, std::string f, double w,double u) {
	CakeCode = c;
	Flavour = f;
	Weight = w;
	UnitPrice = u;
}

int Cake::getCakeCode() {
	return CakeCode;
}

std::string Cake::getFlavour() {
	return Flavour;
}

double Cake::getWeight() {
	return Weight;
}

double Cake::getUnitPrice() {
	return UnitPrice;
}


void Cake::setCakeCode(int c) {
	CakeCode = c;
}

void Cake::setFlavour(std::string f) {
	Flavour = f;
}

void Cake::setWeight(double w) {
	Weight = w;
}

void Cake::setUnitPrice(double u) {
	UnitPrice = u;
}



