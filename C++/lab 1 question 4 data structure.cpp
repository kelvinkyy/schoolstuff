#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct coordinate{
	double x;
	double y;
};

double calculateDistance(coordinate c1, coordinate c2){
	int distance;
	distance = sqrt((c1.x-c2.x)*(c1.x-c2.x) + (c1.y-c2.y)*(c1.y-c2.y));
	return distance;
}
		 	
int main(){
	
	coordinate coor1;
	coordinate coor2;
	
	cout << "PLEASE ENTER THE X FOR THE FIRST COORDINATE " << endl;
	cin >> coor1.x;
	cout << "PLEASE ENTER THE Y FOR THE FIRST COORDINATE " << endl;
	cin >> coor1.y;
	cout << "PLEASE ENTER THE X FOR THE SECOND COORDINATE " << endl;
	cin >> coor2.x;
	cout << "PLEASE ENTER THE Y FOR THE SECOND COORDINATE " << endl;
	cin >> coor2.y;
	
	cout <<"THE DISTANCE IS " <<calculateDistance(coor1,coor2) << endl;

}
