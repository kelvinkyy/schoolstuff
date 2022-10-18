#include <iostream>
#include "Order.h"
#include "OrderList.h"
#include "Cake.h"
#include "CakeList.h"
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


// Method Protoypes
void LineSpacer(int);
void printLine();
void showCakeDetails(Cake);
void cakeSelectionCase (Cake, Order &, double &);
void orderDetails(Order);
void customerInfoRegistration(Order &, string &);
void displayInvalid();
string assignOrderID(OrderList&);
bool findOrder(OrderList &, Order &, string , int &);
void displayCakeMenu(int &,Cake ,Cake ,Cake ,Cake );


// Main
int main() {
	//rand
	srand(time(NULL));

	//Variable Declaration

	double totalSum;
	int index;
	double temp;
	Cake tempCake;
	int menuOption, mainMenuOption;
	string tempString;
	Order tempOrder;

	//Cakes Pre-Initialization

	Cake chocolateCake(01, "Chocolate Lava", 500, 13);
	Cake vanillaCake(02, "Vanilla Dream", 700, 12);
	Cake cheeseCake(03, "Cheese Town", 550, 17);
	Cake strawberryCake(04, "Strawberry Delight", 580, 20);

	//Intialising Linked -List of Order Objects
	OrderList OrderList;


	// Main Menu while Loop.
	while (mainMenuOption != 4) {
		LineSpacer(1);
		menuOption = 0;
		//Header of the Main Menu
		cout << "-+-+-+-+-+-+- BKT Homemade Cakes -+-+-+-+-+-+-" << endl;
		cout << "------------------Main Menu-------------------" << endl;
		LineSpacer(1);
		
		
		cout << "1 : Place an Order!" << endl;
		cout << "2 : View your Orders" << endl;
		cout << "3 : Edit Orders          " << endl;
		cout << "4 : Exit         " << endl;
		cout << "Enter your option :  ";
		cin >> mainMenuOption;

		switch (mainMenuOption) {
			
			//Order Placement
			case 1: {
				
				//Generate an unique Order ID and assigns it into an Order.
				tempOrder.setOrderID(assignOrderID(OrderList));
				
				LineSpacer(1);

				cout << "Customer Information Registration" << endl;
				
				
				//Ask User's for input and stores Customers information
				customerInfoRegistration(tempOrder, tempString);
				
				LineSpacer(1);

				cout << "Customer Information Successfully Stored!" << endl;
				cout << " You now are able to proceed...";

				LineSpacer(2);

				cout << "<<<<Order Placement Page>>>>" << endl;
				
				//Adding Cakes Menu
				while (menuOption != 2) {
					menuOption = 0;
					LineSpacer(1);
					cout << "Order ID: " << tempOrder.getOrderID();
					LineSpacer(2);
					cout << "1. Add Cake" << endl;
					cout << "2. Confirm Order Placement" << endl;
					
					cout << "Enter your option :  ";
					cin >> menuOption;
					printLine();
					
					//If input given is out of bounds.
					if(menuOption != 1 && menuOption != 2) {
						displayInvalid();
						menuOption = 0;
						continue;
					}

					//If user attempts to checkout without any cakes.
					if (tempOrder.Cakes.isEmpty() && menuOption == 2) {
						LineSpacer(1);
						cout << "You have no cakes yet!" << endl;
						menuOption = 0;
						continue;
					}
					
					
					// Shows Cake Menu.
					if (menuOption == 1) {
						//Display Cake Menu.
						displayCakeMenu(menuOption,vanillaCake,chocolateCake,cheeseCake,strawberryCake);

						switch (menuOption) {
							case 1: {
								cakeSelectionCase(vanillaCake,tempOrder,totalSum);
								menuOption = 0;
								break;
							}
							case 2: {
								cakeSelectionCase(chocolateCake,tempOrder,totalSum);
								menuOption = 0;
								break;
							}
							case 3: {
								cakeSelectionCase(cheeseCake,tempOrder,totalSum);
								menuOption = 0;
								break;
							}
							case 4: {
								cakeSelectionCase(strawberryCake,tempOrder,totalSum);
								menuOption = 0;
								break;
							}
							default: {
								void displayInvalid();
								break;
							}
						}
					
					//Confirms Order Placed.
					} else if (menuOption == 2) {
						LineSpacer(1);
						cout << "Your Order Details" << endl;
						cout << "Order ID : " << tempOrder.getOrderID();
						tempOrder.Cakes.displayAll();
						tempOrder.setAmount(totalSum);
						tempOrder.setQty(tempOrder.Cakes.size());
						
						//Inserts the temporary object into the List.
						OrderList.insert(OrderList.size() + 1, tempOrder);
					}
				}
				new(&tempOrder) Order(); //Reconstructing tempOrder Object
				
				menuOption = 0;
				totalSum = 0;
				LineSpacer(2);
				break;
			}
			case 2: {
				
				//Check for an Empty Order List.
				if (OrderList.isEmpty()) {
					LineSpacer(1);
					cout << "No Orders are placed yet!" << endl;
					continue;
				}
				
				
				LineSpacer(1);
				
				//Header for the Order View.
				cout << "-----------------Current Orders-------------------" << endl;
				for (int i = 1; i <= OrderList.size(); i++) {
					//Gets the order nodes from the list
					Order tempOrder = OrderList.getCurrNode(i);
					orderDetails(tempOrder);
				}
				break;
			}

			/* Main Menu
			   Option 3, The edit function
			   to Modify cakes and customer info
			   */

			case 3: {
				
				if (OrderList.isEmpty()) {
					cout << "No Orders are Found" << endl;
					mainMenuOption = 0;
					break;
					}
				
				new(&tempOrder) Order(); // Reconstructs a Temp Object.
				
				LineSpacer(1);
				printLine();
				LineSpacer(1);
				cout << "Enter your Order ID : ";
				cin >> tempString;

				if (findOrder(OrderList, tempOrder, tempString, index)) {
					orderDetails(tempOrder);
					totalSum = tempOrder.getAmount();
				} else {
					cout << "Your Order ID does not exist!" << endl;
					break;
				}

				while (menuOption != 4) {
					printLine();
					LineSpacer(1);
					cout << "1. Edit Customer" << endl;
					cout << "2. Edit Cakes " << endl;
					cout << "3. Delete Order " << endl;
					cout << "4. Back" << endl;
					
					cout << "Enter your option :  ";
					cin >> menuOption;

					switch (menuOption) {
							//Edit Customer's Information
						case 1: {
							
							LineSpacer(1);
							customerInfoRegistration(tempOrder, tempString);

							OrderList.remove(index);
							OrderList.insert(index, tempOrder);
							menuOption = 4;
							break;
						}

						//Edits Cake Information
						case 2: {
							while (menuOption != 3) {
								LineSpacer(1);
								cout << "Order ID: " << tempOrder.getOrderID();
								LineSpacer(2);
								cout << "1. Add Cake" << endl;
								cout << "2. Remove Cake" << endl;
								cout << "3. Back" << endl;
								
								cout << "Enter your option :  ";
								cin >> menuOption;
								
								printLine();
								
								
								if (menuOption == 1) {
									
									displayCakeMenu(menuOption,vanillaCake,chocolateCake,cheeseCake,strawberryCake);

									switch (menuOption) {
										case 1: {
											cakeSelectionCase(vanillaCake,tempOrder,totalSum);
											break;
										}
										case 2: {
											cakeSelectionCase(chocolateCake,tempOrder,totalSum);
											break;
										}
										case 3: {
											cakeSelectionCase(cheeseCake,tempOrder,totalSum);
											break;
										}
										case 4: {
											cakeSelectionCase(strawberryCake,tempOrder,totalSum);
											break;
										}
										default: {
											displayInvalid();
											break;
										}
									}

									
									
									tempOrder.setAmount(totalSum);
									tempOrder.setQty(tempOrder.Cakes.size());

									OrderList.remove(index);
									OrderList.insert(index,tempOrder);
									
									//Reinserts new updated Object into Linked-List		



								} else if (menuOption == 2) {
									int cakeOption = 0;

									if(tempOrder.Cakes.size() == 1) {
										LineSpacer(1);
										cout << "That was the last cake!" << endl;
										cout << "The Order will be Deleted!" << endl;
										menuOption = 4;
										OrderList.remove(index);
										break;
									}

									tempOrder.Cakes.displayAll();
									LineSpacer(1);
									cout << "Which cake do you want to remove: " << endl;
									cin >> cakeOption;

									if(cakeOption > tempOrder.Cakes.size() || cakeOption <= 0 ) {
										cout << "No such cakes exist!" << endl;
										cout << "Please Try Again!" << endl;
										break;
									}
									
									tempCake = tempOrder.Cakes.getCurrNode(cakeOption);
									totalSum = totalSum - tempCake.getUnitPrice();

									if(tempOrder.Cakes.remove(cakeOption)) {
										LineSpacer(1);
										cout << "Cake " << cakeOption << " successfully removed!" << endl;

										tempOrder.setAmount(totalSum);
										tempOrder.setQty(tempOrder.Cakes.size());

										OrderList.remove(index);
										OrderList.insert(index,tempOrder);
									} else {
										LineSpacer(1);
										cout << "Cake " << cakeOption << " could not be removed!" << endl;
									}
								} else if(menuOption == 3) {
									break;
								} else {
									LineSpacer(1);
									cout << "No Order ID was found" << endl;
									break;
								}





							}
							break;
						}	// End Case 2

						case 3: {
		
							OrderList.remove(index);
							LineSpacer(1);
							cout << "Order successfully removed!" << endl;
							menuOption = 4;
							break;
						}



					}
				}
			}
			case 4: {
				break;
			}
		}
	}  LineSpacer(1);
	  cout << "Thank you for using the system! Have a nice day." << endl;
}

//Function/ Method Declaration

/*
 This function prints a line
 */
void LineSpacer(int limit) {
	for (int i = 0; i < limit; i++) {
		cout << endl;
	}
}
/*
 This function prints a line
 */
void printLine() {
	cout << "_____________________________________" << endl;
}
/*
 This function shows cake details.
 */
void showCakeDetails(Cake cakeType) {
	LineSpacer(2);
	cout << "---------- Cake Details -------------" << endl;
	cout << "Cake Chosen : " << cakeType.getFlavour() << endl;
	cout << "Cake Code   : " << cakeType.getCakeCode() << endl;
	cout << "Weight      : " << cakeType.getWeight() << " g" << endl;
	cout << "Unit Price  : RM" << cakeType.getUnitPrice() << endl;
	cout << "-------------------------------------" << endl;
	LineSpacer(1);
}

/*
 This function inserts cake into the List.
*/
void cakeSelectionCase (Cake cake, Order &tempOrder, double &totalSum) {
	showCakeDetails(cake);
	tempOrder.Cakes.insert(tempOrder.Cakes.size()+1,cake);
	totalSum += cake.getUnitPrice();
}

/*
 This function shows order details, customer/cake details.
 */
void orderDetails(Order tempOrder) {
	LineSpacer(1);
	cout << "-----------------Order "<< tempOrder.getOrderID() <<"-------------------" << endl;
	cout << "Order ID : " << tempOrder.getOrderID() << endl;
	LineSpacer(1);
	cout << "---------Customer Information--------"<< endl;
	cout << "Name : " << tempOrder.Cust.getCustName() << endl;
	cout << "ID : " << tempOrder.Cust.getCustID() << endl;
	cout << "Address : " << tempOrder.Cust.getCustAddress() << endl;
	cout << "HP No : " << tempOrder.Cust.getCustHPNo() << endl;
	cout << "-----------Cake Information-----------"<< endl;
	tempOrder.Cakes.displayAll();
	LineSpacer(1);
	cout << "Quantity : " << tempOrder.getQty() << endl;
	cout << "Total Amount : RM" << tempOrder.getAmount() << endl;;
	printLine();
	LineSpacer(1);
}
/*
 This function retreives Order object and inserts customer information.
*/
void customerInfoRegistration(Order &tempOrder, string &tempString) {
    
    printLine();
	cin.ignore();
	LineSpacer(1);
	cout << "Name : ";
	getline(cin,tempString);
	tempOrder.Cust.setCustName(tempString);

	cout << "ID : ";
	getline(cin,tempString);
	tempOrder.Cust.setCustID(tempString);

	cout << "Address : ";
	getline(cin,tempString);
	tempOrder.Cust.setCustAddress(tempString);

	cout << "HP Number : ";
	getline(cin,tempString);
	tempOrder.Cust.setCustHPNo(tempString);
	printLine();

}
/*
 This function shows invalid/ error notice.
 */
void displayInvalid() {

	LineSpacer(2);
	cout << "Invalid option! Please try again." << endl;
	LineSpacer(2);

}


/*
 This function generates an unique Order ID and returns it.
 */
string assignOrderID(OrderList & o) {
	Order temp;

	if (!o.isEmpty()) {
		do {
			temp.generateOrderID();
		} while (o.checkList(temp.getOrderID()) == true);
	} else {
		temp.generateOrderID();
	}

	return temp.getOrderID();

}

/*
 This function finds and compares user input with a stored Order ID and returns the object.
 */
bool findOrder(OrderList &o, Order &temp, string order, int &ind) {

	if (o.isEmpty()) {
		cout << "No Orders are Found" << endl;
		return 0;
	}

	if (!o.isEmpty()) {
		for (int i = 1; i <= o.size(); i++) {
			temp = o.getCurrNode(i);
			if (order == temp.getOrderID()) {
				cout << "Success! Order Found";
				ind = i;
				return true;
				break;
			} else {
				continue;
			}
		}
		return 0;
	}
}

/*
 This function displays a cake menu.
 */
void displayCakeMenu(int &menuOption,Cake vanillaCake ,Cake chocolateCake,Cake cheeseCake,Cake strawberryCake){
	LineSpacer(1);
	cout << "<<<<Cake Menu>>>>" << endl;
	LineSpacer(1);
	cout << "Choose your Cake!" << endl;
	LineSpacer(1);

	cout << "1. " << vanillaCake.getFlavour() << endl;
	cout << "2. " << chocolateCake.getFlavour() << endl;
	cout << "3. " << cheeseCake.getFlavour() << endl;
	cout << "4. " << strawberryCake.getFlavour() << endl;
	
	cout << "Enter your option :  ";
	cin >> menuOption;
}
