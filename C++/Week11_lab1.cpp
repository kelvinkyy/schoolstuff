#include <iostream>

#include <string>

#include <cctype>



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



 return 0;

}
