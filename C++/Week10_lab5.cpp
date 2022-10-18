#include <iostream>

using namespace std;

const int ROW =3;
const int COL =3;

void printBoard(char board[][COL])	{
    for (int row=0;row<ROW;row++) {
		for(int col=0;col<COL;col++){
	        cout << board[row][col] << "\t";
	    }
	cout << endl;
	    
}}

int main (){
	
	char board [ROW][COL] ={ {'X','O','X'},
	                         {'O','X','O'},
							 {'X','O','X'}
							 };
							 
							 board [1][1] = 'O';
	
	printBoard(board);
	



	return 0;
}
