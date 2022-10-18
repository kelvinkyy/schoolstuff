#include <iostream>

using namespace std;

const int SIZE =12;

int main(){
	
	int sales[SIZE];
	int total= 0;
	
	for (int i = 0; i<SIZE; i++){
		cout << "Please enter sales revenue for month " << (i+1) << endl;
		cin >> sales[i];
		
		total = total + sales [i];
	}
	
	for (int i = 0; i<SIZE; i++){
		cout <<"Month"<< (i+1) <<": " << sales[i] << endl;
}
	
	return 0;
}
