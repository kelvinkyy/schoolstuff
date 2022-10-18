#include <iostream>
#include <iomanip>

using namespace std;

double average(double &x, double &y, double &z){
	double averageInt = (x+y+z)/3;
	return averageInt;
		
}
 	
int main(){
	double x,y,z;
	cout << "PLEASE ENTER THE FIRST NUMBER" << endl;
	cin >> x;
	cout << "PLEASE ENTER THE SECOND NUMBER" << endl;
	cin >> y;
	cout << "PLEASE ENTER THE THIRD NUMBER" << endl;
	cin >> z;
	cout <<"THE AVERAGE IS  " << setprecision(2) <<average(x,y,z) << endl;
}
