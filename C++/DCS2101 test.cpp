#include <iostream>

using namespace std;

void greetings(string n){
	
	cout << " asdf" << n << "good afternooon" << endl;
}

struct student {
string name;
int id_number;
int marks;
};



int main(){
	
	student ali;
	student abu = {"abu",435,78};
	cout << abu.marks << endl;
	ali.id_number = 123;
	cout << ali.id_number << endl;
	greetings("YOURMOM");
	
	int a = 10;
	int* ptr = &a;
	cout << a << endl;
	cout << &a << endl;
	cout << ptr << endl;
	
	if(ptr == &a){
		cout << "true" << endl;
	}
	else { cout << "false" << endl;
	}
	
	cout << *ptr << endl;
	
	
	int c =10 , b =20;
	int *p = &c ,*q = &b;
	
	//p=&c;
	//q=&b;
	
	*p = 203;
	cout << c << endl;
	
	
	
	
	
	return 0;
}
