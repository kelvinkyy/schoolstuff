#include <iostream>
#include <iomanip>

using namespace std;

double calcDeliveryFees(double distance){
	int fee = 0;
	
	
	if(distance <= 10){
		fee = 7;
	}
	if(distance >10 && distance <= 25){
		fee = static_cast<int>(distance-10)*1.5 + 7;
	}
	else
	fee = 20;
	if (fee >20)
	fee = 20;
	return fee;}



int main(){
	
double distance[50];
int count = 0;
double fees[50];
double total =0;

double distanceForNow = 0;

do{
	
cout << "Enter the distance: ";
cin >> distanceForNow;

if (distanceForNow >25){
	cout << "Sorry, no delivery service for distance more than 25km" << endl;
}
if (distanceForNow < 0){
	cout << "Distance must be a positive value." << endl;
}
if (distanceForNow >=1 && distanceForNow <=25){
	
    distance[count] = distanceForNow;
    count++;
}

}while(distanceForNow!= 0 && count <= 50);

cout << setw(30) << "Customer Distance (km)" << setw(30) << "Delivery Fees (RM)" << endl;
for (int i = 0; i<count; i++){
fees[i]	= calcDeliveryFees(distance[i]);
cout << setw(30)<< distance[i] << setw(30) << fees[i] << endl;
total = fees[i] + total;
}
cout << "total: " << total;
	return 0;
}
