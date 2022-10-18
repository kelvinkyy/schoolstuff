#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int mark =0,total=0,counter=0;
	double average =0;
	
	cout << "Please enter the student mark or -1 to exit: ";
	cin >> mark;
	
	total = total + mark;
	
	counter++;
	
	while (mark!= -1) {
		cout << "Please enter the student mark or -1 to exit: ";
		cin  >> mark;
		total = total + mark;
		
		counter++;
	}
	total++;
	average = (static_cast<double>(total))/(counter-1);
	cout << "total mark of "<< (counter-1) << " students is : "<< total << endl;
	cout << "average mark of all the students: " << average << endl;
	return 0;
}
