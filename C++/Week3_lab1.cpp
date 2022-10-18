#include <iostream>
#include <string>

using namespace std;

char enterGrade(){
	
	char letter;
	
	do{
	cout << "enter your grade: " ;
	cin >> letter;
	letter = toupper(letter);
}while (letter <'A'|| letter >'F');
	
	return letter;
}
const int SIZE =10;

int main(){
	
	/*for(int i = 0 ;i < 5 ; i++){
		
		for(int o = 4; o>0 ; o--){
			
				cout << i << o ;
		}
		
	
	}*/
	
	float number[100];
	
for(int i= 0 ;i<SIZE; i++){
	
	number[i] = (i+1)/100;
	cout << number[i] <<endl;
	
}

	
	return 0;
}
