#include <iostream>
#include <string>

using namespace std;

void printChapter (string title, int pageNumber){
	
	cout << title;
	
	for (int i=0; i<50; i++)
	cout << ".";
	
	cout << "\n" << pageNumber << endl;
	
}


int main(){
	
	printChapter("Chapter 1",1);
	printChapter("Chapter 2",50);
	printChapter("Chapter 3",70);
	printChapter("Chapter 4",90);
	
	return 0;
}
