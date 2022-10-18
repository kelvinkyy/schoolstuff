#include <iostream>

using namespace std;

int countEven(int* arr, int s){
	
	int evennum = 0;
	
	for(int i =0; i<s; i++){
	   if(arr[i]%2 == 0){
	   	evennum++;	   	
	   }
	}
	return evennum;
};

int main(){
	
int evennumbers;
int number[5];

for (int i = 0; i < 5; ++i) {
cout<<"Enter a numbers: ";
cin>>number[i];
}	

cout << "NUMBER OF EVEN NUMBERS: " <<countEven(number,5);
	return 0;
}
