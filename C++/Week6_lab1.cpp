/* Name: Kee Yong Yik
   Data and time: 21/5/21
   purpose:
   */

#include <iostream>

using namespace std;

int main(){

	
	int number = 0;
	cout << "Please enter a number." << endl;
	cin >> number;
	/*
	if (number>0)
	   cout << number << " is a positive number" << endl;
	   
	if (number<0)   
	   cout << number << " is a negative number" << endl;
	
	if (number==0)
	   cout << "this is a zero (natural0 number" << endl;
	   */
	
	if (number>0)
	   cout << number << " is a positive number" << endl;
	   
	else if (number<0)   
	   cout << number << " is a negative number" << endl;
	
	else 
	   cout << "this is a zero (natural) number" << endl;
	
	return 0;
}
