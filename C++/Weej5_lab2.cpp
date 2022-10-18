#include <iostream>

using namespace std;

int main(){
	
	int no1=0,no2=0,no3=0;
	int larger;
	
	cout << "Please enter 3 numbers." << endl;
	cin >> no1 >> no2 >>no3;
	/*
	if (no1>no2)
	   larger = no1;
	else
	   larger = no2;
	   
	cout << larger << " is the larger number."; 
	
	larger = (no1>no2)?no1:no2;
	
	cout << larger << " is the larger number."; */
	/*
	if (no1>no2 && no1>no3)
	   cout << no1 << "is the largest number";
	else if (no2>no1 && no2>no3)
	   cout << no2 << "is the largest number";
	else 
	   cout << no3 << " is the largest number";
	*/
	larger = (no1>no2)?no1:no2;
	larger = (no3>larger)?no3:larger;
    
    cout << larger << "is the larger number";
	return 0;
} 
