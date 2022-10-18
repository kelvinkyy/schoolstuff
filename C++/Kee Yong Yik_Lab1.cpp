#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	int ticket = 0, adultTicket = 0, childrenTicket = 0;
	string invoiceNumber = " ", concertName = " ";
	double adultTotal = 0, childrenTotal = 0;
	
	
	cout << "Enter invoice No      : " ;
	cin >> invoiceNumber;
	
	cout<< "Concert Name          : " ;
	cin >> concertName;
	
	cout << "Adult Tickets Sold    : " ;
	cin >> adultTicket;
	
	cout << "Child Tickets Sold    : " ;
	cin >> childrenTicket;
	
	if(adultTicket < 10)
		adultTotal = adultTicket * 25.0;
	
	else if(adultTicket >=10 and adultTicket <=20)
	    adultTotal = adultTicket * 23.0;
	
	else;
	    adultTotal = adultTicket * 20.0;
	    
	
	if(childrenTicket < 10)
		childrenTotal = childrenTicket * 15.0;
	
	else if(adultTicket >=10 and adultTicket <=20)
	    childrenTotal = childrenTicket * 13.0;
	
	else;
	    childrenTotal = childrenTicket * 10.0;
	
	cout << endl;
	
	cout << setprecision(2) << fixed;
	
	cout << "Invoice No                     : " << invoiceNumber << endl;
    cout << "Total Amount                   : RM " << adultTotal + childrenTotal << endl;
	cout << "Paid to INTI College           : RM " << (adultTotal + childrenTotal)*0.3 << endl;
	cout << "Paid to External Organizer     : RM " << (adultTotal + childrenTotal)*0.7 << endl;
	return 0;
}
