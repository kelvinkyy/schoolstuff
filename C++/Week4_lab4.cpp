/* Name: Kee Yong Yik
   Date and time: 7/5/2021 12.46p.m.
   Purpose: use rand()
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int limit = 10;

int main() {
	
	
	srand(time(0));
	
	cout << rand()%10 << endl;
	
	int dice1 = rand()%6 + 1, dice2 =  rand()%6 + 1;
		
	cout << "Please enter any key to generate the first random number: ";
	cin.get(); // get any type of character including enter and space
	
	cout << "dice 1 = " << dice1 << endl;
	
	cout << "Please enter any key to generate the first random number: ";
	cin.get();
	
	cout << "dice 2 = " << dice2 << endl;

	
	
	return 0;
}
