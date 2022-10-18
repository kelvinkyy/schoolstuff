/* Name: Kee Yong Yik
   Date and time: 7/5/21 11.06
   Purpose: logical thinking and round function
   */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int test1 = 0, lab1= 0, assignment= 0;
	double total = 0;
	
	cout << "Enter student test mark in 100%: ";
	cin >> test1;
	
	cout << "Enter student lab in 100%: ";
	cin >> lab1;
	
	cout << "Enter assignment mark in 100%: ";
	cin >> assignment;
	
	total = (assignment*0.3) + (lab1*0.2) + (test1*0.1);

	
	cout << "Total coursework mark in 60%: " << total << "%" << endl;
	
	cout << "After rounding process, your coursework mark is: " 
	     << static_cast<int> (total + 0.5) << "%" << endl;
	     
// another way to do it
    cout << "After rounding process, your coursework mark is: " 
         << round(total) << endl;
	
	
	
	
	
	return 0;
}
