#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int value[]= {4,5,7,0,1,7,8,9};
	int total = 0; int average = 0;
	
	for (int i=0; i<8; i++){
		
		cout << value[i] << " ";
	}
	cout << endl;
	
	for (int i=7; i>-1; i= i-1){
		
		cout << value[i] << " ";
	}
	for (int i=0; i<8; i++){
		
		total = value[i] + total;
	}
	cout << endl;
	cout << total << endl;
	average = total/8;
	cout << average << endl;
	
	return 0;
}
