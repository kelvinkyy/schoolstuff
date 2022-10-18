#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
    fstream dataFile;
    
    dataFile.open("names.txt", ios::in);
    string name;
    
    dataFile >> name;
    
    while (!dataFile.eof()) {
    	cout << name << endl;
    	
    	dataFile >> name;
	}
	
	dataFile.close();
	return 0;
}
