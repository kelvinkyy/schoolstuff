#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int SIZE =12;

int main(){
	
	int sales[SIZE];
	int total= 0;
	ofstream outputFile;
	
	outputFile.open("sales.txt");
	
	if (outputFile.fail()) {
		cerr << "Error in file operation!\n" << endl;
		cerr << "Program terminated!";
		exit(-1);
	}
	
	for (int i = 0; i<SIZE; i++){
		cout << "Please enter sales revenue for month " << (i+1) << endl;
		cin >> sales[i];
		
		total = total + sales [i];
	}
	
	for (int i = 0; i<SIZE; i++){
		cout <<"Month"<< (i+1) <<": " << sales[i] << endl;


    outputFile << sales[i] << endl;}
    
    cout << "total sales is" << total << endl;
    cout << "Please check the sales .txt file..." << endl;
    
    outputFile.close();
	
	return 0;
}
