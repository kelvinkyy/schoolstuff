#include <iostream>
#include "lab3q1.h"
#include <string>

using namespace std;


	    Student::Student(std::string sID, std::string n, double cwm, double fem){
	    	
	    	studentID = sID;
	    	name = n;
	    	courseworkMark = cwm;
	    	FinalExamMark =fem;	    	
		};
	    Student::calcTotalMark(double cwm){
	    	double totalmark;
	    	totalmark = cwm;
	    	return totalmark;
		};
		void Student::setStudentID(std::string s){
			studentID = s;
		};
		std::string Student::getStudentID(){
			return studentID;
		};
		void Student::setName(std::string n){
			name = n;
		};
		std::string Student::getName(){
			return name;
		};
		void Student::setcourseworkMark(double cwm){
			courseworkMark = cwm;
		};
		double Student::getcourseworkMark(){
			return courseworkMark;
		};
		void Student::setFinalExamMark(double fem){
			FinalExamMark = fem;
		};
		double Student::getFinalExamMark(){
			return FinalExamMark;
		};


int main(){
	
	Student s1 ("P1234567", "Kelly",40,35);
	
	cout << "Student ID: " << s1.getStudentID() << endl;
	cout << "Name: " << s1.getName() << endl;
	cout << "Coursework Mark: " << s1.getcourseworkMark() << endl;
	cout << "Final Exam Mark: " << s1.getFinalExamMark() << endl;
	
	
	return 0;
}


