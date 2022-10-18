#include <iostream>
#include <iomanip>

using namespace std;
 	
 	bool checkInt(int number){
 		if(number <=100 && number >=1){
 			return false;
		 }
		 else{
		 	return true;
		 }
	 }
	 
	int FindLargest(int Mark[], int &largest, int position){
	    largest = Mark[0];
		
		for(int a=0;a<10;a++){
			if(largest < Mark[a]){
				largest = Mark[a];
				position = position + 1;
			}
		}
		return position;
	}
 	
int main(){
	int position =0;
	int largest;
	int Mark[10];
	bool again = false;
	int g =0;
	
	for(int q = 0; q<10; q++){
		
		cout << "PLEASE ENTER A NUMBER" << endl;
		cin >> g;
		again = checkInt(g);
		if(again == false){
		Mark[q] = g;}
		if(again == true) {
			cout << "TRY AGAIN!! INPUT A NUMBER (1-100)" << endl;
			Mark[q]= 0;
			q=q-1;
			continue;
			again = false;						
		}
	}
	
	cout << "value = " <<largest << "  position = " << FindLargest(Mark,largest,position) << endl;
	
	return 0;
}
