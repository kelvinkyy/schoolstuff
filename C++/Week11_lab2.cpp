#include <iostream>

#include <string>

#include <cctype>

#include <iomanip>



using namespace std;



struct Stock {

  int id;

  string name;

};



int main() {

 //stock list in the inventory

 Stock stockList[] = {{1234,"Pen"}, {4455, "Ruler"},

            {4896,"Book"},{8896, "Card"}};

 int cart[5];  //maximum can order 5 items

 int itemCount=0; //my shopping cart quantity

 char nextItem = 'Y';

 int id=0;

 bool foundDuplicate = false; //check any duplicate item
 
 bool foundinStock = false;
 
 int quantity[7] = {3,4,6,7,8,9,9};


 do {

    cout << "Enter stock id: ";

    cin >> id;

    // Check stock id in the inventory

    for (int i = 0; i<4; i++){
    	if (id == stockList[i].id){
    		foundinStock = true;
		}
   }
    if (foundinStock == false) {
    	cout << "The #id " <<id << "is not found in the inventory" << endl;
    	cout << "Please enter again";
    	continue;
	}
	

    //check again the item I ordered previously

    for (int i=0; i<itemCount; i++) {

     if (id == cart[i])

      foundDuplicate = true; //I found the same id in the shopping cart

    }



    if (foundDuplicate)

    {

      cout << "The item already in the shopping cart!" << endl;

    }

    else

    {

      //add the item to the cart

      cart[itemCount++] = id;

    }





    foundDuplicate = false; //reset the status
    foundinStock = false;



    cout << "Do you want to order next item? [Y/N]: ";

    cin >> nextItem;

    nextItem = toupper(nextItem); //convert to the uppercase

 } while (nextItem != 'N');


// print stock summary report
cout << "shopping cart summary report" << endl << endl;

cout << setw(10) << "No" << setw(10) << "Stock ID" << setw(10) << "Item"
     << setw(10) << "Quantity" << endl;

for (int i=0;i<3;i++){
	cout << setw(10) << "#" << (i+1) << cart[i] << setw(10) <<" Unknown" 
	     << setw(10) << quantity[i] << endl;
}

 return 0;

}
