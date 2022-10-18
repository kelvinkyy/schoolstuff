#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	double finalMark=0;
	double cgpa=0;
	int roundedFinalMark=0;
	char grade= '\0'; //assigned to a null value
	
	cout<< "Please enter a final mark in range 0-100: ";
	cin >>finalMark;
	
	roundedFinalMark = static_cast<int>(finalMark+0.5);
	
	if (roundedFinalMark >= 90 && roundedFinalMark <= 100)
	   grade = 'A';
	else if (roundedFinalMark >= 80 && roundedFinalMark <= 89)
	   grade = 'B';
	else if (roundedFinalMark >= 70 && roundedFinalMark <= 79)
	   grade = 'C';
	else if (roundedFinalMark >= 60 && roundedFinalMark <= 69)
	   grade = 'D';
	else if (roundedFinalMark >= 50 && roundedFinalMark <= 59)
	   grade = 'E';
	else if (roundedFinalMark >= 0 && roundedFinalMark <= 49)
	   grade = 'F';
	else
	   {
	   cout << "Invalid mark";
	   exit(0); 
       }
       
	cout << "Your rounded final mark is " << roundedFinalMark << " and your grade is " << grade << endl;
	
	switch (grade) { //switch must be a number or char
          case 'A':
             cgpa = 4.00;
             break;
          case 'B':
          	 cgpa =3.67;
          	 break;
          case 'C':
          	 cgpa = 3.33;
          	 break;
          case 'D':
          	 cgpa = 3.00;
          	 break;
          case 'E':
          	 cgpa = 2.67;
          	 break;
          case 'F':
          	 cgpa = 2.00;
          	 break;
          default:
          	 cout << "INVALID GRADE PRODUCED" << endl;
          }
    cout << setprecision(2) << showpoint << fixed;
    cout << "your cgpa is " << cgpa << endl;
	
	
	return 0;
}
