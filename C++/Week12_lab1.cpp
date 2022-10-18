#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

struct Item{
	int id;
	char name[80];
	double price;
};

int main(){
	
		int x;
	x = 7%4^3/2;
	cout << x;
	
    Item item;
    char again = '\0;'; // null value
    int count = 0;
    fstream file("item.dat", ios::out | ios::binary); //create a new file in binary mode
    
    do{
    
    count++;
    cout << "Enter a stock item id "<< count << endl;
    cin >> item.id;
    
    cin.ignore(); // clear keyboard buffer
    
    cout << "Enter a stock item name "<< count << endl;
    cin.getline(item.name,80);
    
    cout << "Enter a stock item price "<< count  << endl;
    cin >> item.price;
    
    cout << "Do you want to enter the next record [Y/N]" << endl;
    cin >> again;
    
    file.write(reinterpret_cast<char *>(&item), sizeof(item));
    
    cout << count << " item saved in the file called item.dat" << endl;
    
    again = toupper(again);
    file.close();
    } while(again == 'Y');
	
	return 0;
}
