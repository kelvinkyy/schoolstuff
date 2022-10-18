#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Date{
	int day;
	int month;
	int year;
	
	
	void printDate(){
		cout << day << "/" << month <<"/" << year << endl;
	}
	};
	
struct Employee {
	string id;
	string name;
	Date dob;
	Date joinDate;
	double payroll;
	

};

void printEmployee (Employee emp1) {
	cout << "\nEmployee id #" << emp1.id << endl;
	cout << "\nEmployee name: " << emp1.name << endl;
	cout << "\nEmployee DOB: "  << emp1.dob.day <<"." << emp1.dob.month << "." << emp1.dob.day << endl;
	cout << "\nEmployee join date: " << emp1.joinDate.printDate() << endl;
	cout << "Employee salary: $" <<emp1.payroll << endl;
}

int main(){
	
	Employee emp1 = {"EX098","Lai Kim Min", 10,5,1998,2018, 2000.00 };
	
	printEmployee(emp1);
	
	int x;
	x = 7%4^3/2;

	return 0;
}
