#include <iostream>

using namespace std;

int main(){
	int counter=0;
	int counter2 = 0;
	for (counter=1; counter<=100;counter++){
	
	cout << counter << " ";
	
	counter2++;
	if (counter2 == 10) {
		cout << endl;
		counter2 = 0;
	}
}
	
	return 0;
}
