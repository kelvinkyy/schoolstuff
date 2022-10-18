#include <iostream>

using namespace std;

const double PI = 22.0/7.0;

double inputRadius(){
	double radius = 0.0;
	
	cout << "Please enter a circle radius: ";
	cin >> radius;
	
	return radius;
}

double calculateArea(double radius) {
	
	double area =0.0;
	
	area = PI * radius * radius;
	
	return area;
}
double getCircumference(double radius){
	
	double circumference = 0.0;
	circumference = PI * radius * 2;
	
	return circumference;
}

void printResult(double area, double circumference){
	
	cout << "The area of a circle is " << area << endl;
	cout << "The circumference of a circle is " << circumference << endl;
	
}

int main(){
	
	double radius = 0.0, area= 0.0, circumference=0.0;
	
	radius = inputRadius();
	
	area =  calculateArea(radius);
	
	circumference = getCircumference(radius);
	
	printResult(area, circumference);
	
	return 0;
}
