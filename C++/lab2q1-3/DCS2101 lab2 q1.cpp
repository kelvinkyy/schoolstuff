#include <iostream>

using namespace std;

int main1(){
	
	double length, width, area;
	double *lengthPtr;
	double *widthPtr;
	
	cout << "PLEASE ENTER THE LENGTH OF THE RECTANGLE" << endl;
	cin >> length;
	cout << "PLEASE ENTER THE WIDTH OF THE RECTANGLE" << endl;
	cin >> width;
	
	lengthPtr = &length;
	widthPtr = &width;
	
	area = *lengthPtr * *widthPtr;
	
	cout << "THE AREA OF THE RECTANGLE IS "<<area << endl;
	
	if(*widthPtr < *lengthPtr){
		cout << "THE WIDTH IS LESSER THAN THE LENGTH" << endl;
	}
	else if(*widthPtr == *lengthPtr ){
		cout << "THE WIDTH IS THE SAME AS THE LENGTH" << endl;
	}
	else{
		cout << "THE WIDTH IS GREATER THAN THE STRENGTH" << endl;
	}
	
	return 0;
}
