/*Name: Kee Yong Yik
  Date and time: 7/5/2021 12.23p.m.
  purpose: use setw
  */



#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	
	string name1 = "Kee Yong Yik", name2 = "Lee Yu Xuan";
	double test1 = 78.6, test2 = 80.3;
	double assignment1 = 67.50, assignment2 = 86.30;
	string line (65,'-');
	
	cout << setw(40) << left << "Name" << setw(10) << right << "Test" << setw(15) << right << "Assignment" << endl;
	cout << line << endl;
	cout << setw(40) << left << name1 << setw(10) << right << test1 << setw(15) << right << assignment1 << endl;
	cout << setw(40) << left << name2 << setw(10) << right << test2 << setw(15) << right << assignment2 << endl;
	
	return 0;
}
