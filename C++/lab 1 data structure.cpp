#include <iostream>
#include <iomanip>

using namespace std;

int areaTriangle(int b, int h){
	int a = b*h/2;
	return a;
	
}

int main(){
	int base, height;
	cout << "PLEASE ENTER THE BASE OF THE TRIANGLE" << endl;
	cin >> base;
	cout << "PLEASE ENTER THE HEIGHT OF THE TRIANGLE" << endl;
	cin >> height;
	cout <<"AREA OF THE TRIANGLE IS " << areaTriangle(base,height) << endl;
}
