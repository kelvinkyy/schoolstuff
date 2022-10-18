#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	fstream dataFile;
	
	dataFile.open("names.txt", ios::out);
	
	dataFile << "Kee Yong Yik" << endl;
	dataFile << "John" << endl;
	dataFile << "Mark" << endl;
	dataFile << "Peter" << endl;
	dataFile << "David" << endl;
	dataFile << "Susan" << endl;
	
	dataFile.close();
	
	cout << "Please check the names.txt.."  << endl;
	
	
	return 0;
}
