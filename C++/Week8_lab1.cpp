#include <iostream>
#include <string>

using namespace std;
	
	struct StudentMark{
	  string subjectCode;
	  string studentName;
	  double coursework;
	  double exam;
	};

int main() {
	
	StudentMark student1;
	
	cout << "Enter subject code: " << endl;
	getline(cin, student1.subjectCode);

	cout << "Enter student name: " << endl;
	getline(cin, student1.studentName);
	
	cout << "Enter student coursework mark: " << endl;
	cin >> student1.coursework;
	
	cout << "Enter student exam mark: " << endl;
	cin >> student1.exam;
	
	cout << "subject code: " << student1.subjectCode << endl;
	cout << "Student: " << student1.studentName << endl;
	cout << "Final exam: " << student1.exam << endl;
	cout << "coursework: " << student1.coursework << endl;
	
	cout <<"The final mark is " << (student1.exam*0.4) + (student1.coursework*0.6) << "%" <<endl;
	
	return 0;
}
