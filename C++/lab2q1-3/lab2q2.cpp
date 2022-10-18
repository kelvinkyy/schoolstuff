#include <iostream>

using namespace std;

int* Sum(int *n1, int *n2, int *n3){
	
	int* answer = new int;
	
	*answer = *n1 + *n2 + *n3;
	
	return answer;
}

int main2(){
	
	int number1, number2, number3;
	int *sumPtr = NULL;
	
	cout << "ENTER NUMBER 1" << endl;
	cin >> number1;
	cout << "ENTER NUMBER 2" << endl;
	cin >> number2;
	cout << "ENTER NUMBER 3" << endl;
	cin >> number3;
	
	int* sum = Sum(&number1,&number2,&number3);
	
	cout << *sum;
	
	
	return 0;
}
