/* Name: Kee Yong Yik
   Date: 30.4.2021
   purpose: logical thinking
   */
   
#include <iostream>

using namespace std;

int main() {
	
	int number1 = 0, number2 = 0, temp = 0;
	
	cout << "Please enter a number: "; 
	cin >> number1;
	cout << "Please enter another number: ";
	cin >> number2;
	
	cout << "number 1 = " << number1 << endl;
	cout << "number 2 = " << number2 << endl;
	
	temp = number1;
	number1 = number2;
	number2 = temp;
	
	cout << "after swapping values"; endl; 
	cout << "number 1 = " << number1 << endl;
	cout << "number 2 = " << number2 << endl;
	
	
	return 0;
}
