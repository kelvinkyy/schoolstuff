#include <iostream>
#include <string>

using namespace std;

int checkCode(string discountCode[], string code){
	int index = -1;
for (int i =0;i<5;i++){
	if (discountCode[i] == code)
	index = i;
	
}
return index;
}

int main(){
	
	string discountCode[] = {"M01","X11","D55","ZZZ","EAT"};
	double discount[] = { 0.2,0.15,0.3,0.4,0.25};
	
	string code = "";
	
	cout << "Please enter a discount code: ";
	cin >> code;
	
	int index = checkCode(discountCode, code);
	
	if (index == -1)
	   cout << "INVALID PROMOTION CODE!" << endl;
	else
	   cout << "YOU HAVE " << discount[index]*100 << "% discount!" << endl;
	
	return 0;
}
