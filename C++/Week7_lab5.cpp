#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int getNumber(){
	
	return rand()%11;
}

bool checkAnswer(int total, int answer){
	if (answer == total)
	return true;
	else;
	return false;
	
}

int main(){
	
	int no1=0, no2=0, total=0, answer =0;
	bool check = 0;
	srand(time(0));
	
	no1 = getNumber();
	no2 = getNumber();
	
	total = no1+no2;
	
	cout << no1 << "+" << no2 << "= ?" << endl;
	cout << "Please enter your answer: ";
	cin >> answer;
	
	check = checkAnswer(total,answer);
	if (check == true)
	cout << "YOUR ANSWER IS CORRECT" << endl;
	else 
	cout << "YOUR ANSWER IS WRONG" << endl;
	return 0;
}
