#include <iostream>
#include <cmath>

using namespace std;

void printHypothenuse(int sideA, int sideB){
	
	double hypothenuse =0.0;

hypothenuse = sqrt(pow(sideA,2.0) + pow(sideB,2.0));
cout << hypothenuse << endl;
}

int main(){
	
	int sideA=0, sideB=0;
	int area = 0;
	
	cout << "Enter sideA and sideB of a right triangle" <<endl;
	cin >> sideA >> sideB;
	
	printHypothenuse(sideA,sideB);
	
	return 0;
}


