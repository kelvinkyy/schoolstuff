#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int SIZE = 100;

void createDataset(int []);
void displayDataset(int []);
bool search(const int[], int);

int main(){
	
    srand(time(0));
	
	int data[SIZE];
	int target = 0;
	bool found = false;
	
	createDataset(data);
	displayDataset(data);
	
	cout << "Enter a search number (1-100) : ";
	cin >> target;

    found = search(data, target);
    if (found){
    	cout << "target found in the data set" << endl;
	}
	else
	 cout << "target not found in the data set " << endl;
	
	return 0;
}

void createDataset(int data[]){
	for (int i=0;i < SIZE; i++){
		
		data[i] = rand()%100 + 1;
	}
}

void displayDataset(int data[]){
	
	int counter =0;
	for(int r = 0; r < SIZE; r++){
		cout << setw(3);
		cout << data[r];
		counter++;
		if (counter == 10){
			cout << endl;
			counter = 0;
		}
	}
}
bool search(int data[], int target){
	
	bool found = false;
	
	for (int p =0; p < SIZE ; p++){
		if(data[p]==target){
			found = true;
			break;
		}
	} return found;
}
