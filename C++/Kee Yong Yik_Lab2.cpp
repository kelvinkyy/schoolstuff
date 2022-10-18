#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int digit1Enter = 7, digit2Enter = 8, digit3Enter = 9;
	int numberEnter1 = 0, numberEnter2 = 0, numberEnter3 = 0;
	int counter = 1;


	do {
		cout << "attempt #" << counter << endl;
		cout << "Enter Digit 1: " ;
		cin >> numberEnter1;
		cout << "Enter Digit 2: " ;
		cin >> numberEnter2;
		cout << "Enter Digit 3: " ;
		cin >> numberEnter3;
		
		if(digit1Enter != numberEnter1 && digit2Enter != numberEnter2 && digit3Enter != numberEnter3)
		cout << "Invalid Password!" << endl;
		counter++;
		if (counter > 3)
		return 0;
		
	}while (digit1Enter != numberEnter1 && digit2Enter != numberEnter2 && digit3Enter != numberEnter3);
	
	    cout << endl;
		cout << "Access Granted!"<< endl;
		cout << endl;
return 0; 		
		
		
}
