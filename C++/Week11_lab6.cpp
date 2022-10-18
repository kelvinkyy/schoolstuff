#include <iostream>
#include <fstream>


using namespace std;

const int SIZE = 10;

int main(){
	
	
	fstream dataFile;
	dataFile.open("num.dat", ios::binary |ios::out);
	
	int number[SIZE];
	
	for(int i=0; i<SIZE; i++) {
		
		cout << "Please enter number " << (i+1) << ":";
		cin >> number[i];
	}
	dataFile.write(reinterpret_cast<char*>(number),sizeof(number));
	
	dataFile.close();
	cout << "Please check the num.data file.." << endl;
	
	return 0;}
