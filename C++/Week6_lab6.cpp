#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string userName = "";
	
	do{
	
	cout << "Please enter your username: ";
	getline(cin,userName);
	
	if (userName.length() <5)
	cout<< "Please enter more than 5 characters" << endl;

	}while (userName.length()<5);
	
	cout << "your username has been registered"<< endl; 
	
	return 0; 
}
