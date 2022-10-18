#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
	
	char letter = '\0';
	fstream dataFile;
	
	dataFile.open("Week11_lab4.cpp",ios::in);
	
	if (dataFile.fail()) {
		
		cout << "File operation error!" << endl;
		cout << "Please check with the administrator" << endl;
		exit(-1);
	}
	
	dataFile.get(letter);
	
	while (!dataFile.eof()) {
		cout << letter;
		
		dataFile.get(letter);
	}
	
	dataFile.close();
	
	return 0;
}
