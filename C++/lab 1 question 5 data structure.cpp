#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct car{
	double hours;
	double charge;

};

double calculateCharge(car c){
	double charge;
	int hours = ceil(c.hours);
	if (hours <= 3){
		charge = 2;
	}
	if(hours>3){
		charge = 2 + (hours-3)*0.5;		
	}
	return charge;
}
 	
int main(){
	
	car c1,c2,c3;
	double totalCharge;
	double totalHours;
	
	cout << "PLEASE ENTER THE NUMBER OF HOURS PARKED FOR THE FIRST CAR" << endl;
	cin >> c1.hours;
	c1.charge = calculateCharge(c1);
	cout << "PLEASE ENTER THE NUMBER OF HOURS PARKED FOR THE SECOND CAR" << endl;
	cin >> c2.hours;
	c2.charge = calculateCharge(c2);
	cout << "PLEASE ENTER THE NUMBER OF HOURS PARKED FOR THE THIRD CAR" << endl;
	cin >> c3.hours;
	c3.charge = calculateCharge(c3);
	
	totalCharge = c1.charge + c2.charge + c3.charge;
	totalHours = c1.hours+c2.hours+c3.hours;
	
	
	cout << setw(5) << "car" << setw(10) << setprecision(1)<< fixed  << "hours" << setw(10)<< setprecision(2) << fixed << "charge" << endl;
	cout << setw(5) << "car1" << setw(10) << setprecision(1)<< fixed  << c1.hours << setw(10)<< setprecision(2) << fixed << c1.charge << endl;
	cout << setw(5) << "car2" << setw(10) << setprecision(1)<< fixed  << c2.hours << setw(10)<< setprecision(2) << fixed << c2.charge << endl;
	cout << setw(5) << "car3" << setw(10) << setprecision(1)<< fixed  << c3.hours << setw(10)<< setprecision(2) << fixed << c3.charge << endl;
	cout << setw(5) << "total" << setw(10) << setprecision(1)<< fixed  << totalHours << setw(10)<< setprecision(2) << fixed << totalCharge << endl;



}
