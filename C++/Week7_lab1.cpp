#include <iostream>

using namespace std;

void printTitle();
void playGame();
void endGame();

int main() {
	
	printTitle();
	playGame();
	endGame();

	
	return 0;
}

void printTitle(){
	
	cout << "funny games" << endl;
	cout << "Version 1.0" << endl;
	cout << "Press enter key to see the outcome .." << endl;
	
}
void playGame(){
		cin.get();
	cout << "You got 7 as a lucky number...." << endl;
}

void endGame(){
	cout << "\nThank you. Bye bye" << endl;
	cout << "Have a nice day" << endl;
}
