#include <iostream>
#include <string>

using namespace std;

struct Date{
	string day;
	string month;
	string year;
		};
struct Employee{
		
	string empNo;
	string name;
	string jobCode;
	int payCode;
	Date hireDate;};
	
struct Jobdescription{
	string jobCode;
	string description; };

struct Payrate{
	int payCode;
	string payRate;
};

struct ReportSummary{
    string empCode;
    string name;
    string job;
    string payRate;
	int hours;
};

int main(){
	
	struct ReportSummary reportsummary[100];
	struct Employee employee[10];
	
	employee[0].empNo = "E1001"; employee[0].name = "John"; employee[0].jobCode = "A01"; employee[0].payCode = 01; employee[0].hireDate.day= "01"; employee[0].hireDate.month ="01";employee[0].hireDate.year = "2020";
	employee[1].empNo = "E1002"; employee[1].name = "Ali"; employee[1].jobCode = "A02"; employee[1].payCode = 02; employee[1].hireDate.day= "02"; employee[1].hireDate.month ="02";employee[1].hireDate.year = "2020"; 
	employee[2].empNo = "E1003"; employee[2].name = "Abu"; employee[2].jobCode = "A03"; employee[2].payCode = 03; employee[2].hireDate.day= "05"; employee[2].hireDate.month ="05";employee[2].hireDate.year = "2020";
	employee[3].empNo = "E1004"; employee[3].name = "Desmond"; employee[3].jobCode = "A04"; employee[3].payCode = 04; employee[3].hireDate.day= "23"; employee[3].hireDate.month ="06";employee[3].hireDate.year = "2020";
	employee[4].empNo = "E1005"; employee[4].name = "Jonathan"; employee[4].jobCode = "A05"; employee[4].payCode = 04; employee[4].hireDate.day= "21"; employee[4].hireDate.month ="04";employee[4].hireDate.year = "2020";
	employee[5].empNo = "E1006"; employee[5].name = "Cedric"; employee[5].jobCode = "A05"; employee[5].payCode = 04; employee[5].hireDate.day= "21"; employee[5].hireDate.month ="02";employee[5].hireDate.year = "2021";
	employee[6].empNo = "E1007"; employee[6].name = "Jimmy"; employee[6].jobCode = "A03"; employee[6].payCode = 03; employee[6].hireDate.day= "21"; employee[6].hireDate.month ="04";employee[6].hireDate.year = "2020";
	employee[7].empNo = "E1008"; employee[7].name = "Red"; employee[7].jobCode = "A01"; employee[7].payCode = 01; employee[7].hireDate.day= "23"; employee[7].hireDate.month ="07";employee[7].hireDate.year = "2020";
	employee[8].empNo = "E1009"; employee[8].name = "Lacari"; employee[8].jobCode = "A02"; employee[8].payCode = 02; employee[8].hireDate.day= "13"; employee[8].hireDate.month ="01";employee[8].hireDate.year = "2021";
	employee[9].empNo = "E1010"; employee[9].name = "Code"; employee[9].jobCode = "A05"; employee[9].payCode = 04; employee[9].hireDate.day= "25"; employee[9].hireDate.month ="04";employee[9].hireDate.year = "2021";

    struct Jobdescription jobdescription[6];
    
    jobdescription[0].jobCode = "A01"; jobdescription[0].description = "cleaner";
    jobdescription[1].jobCode = "A02"; jobdescription[1].description = "clerk";
    jobdescription[2].jobCode = "A03"; jobdescription[2].description = "driver";
    jobdescription[3].jobCode = "A04"; jobdescription[3].description = "operator";
    jobdescription[4].jobCode = "A05"; jobdescription[4].description = "salesperson";
    jobdescription[5].jobCode = "A06"; jobdescription[5].description = "stock keeper";
    
    struct Payrate payrate[4];
    
    payrate[0].payCode = 01; payrate[0].payRate = "RM 9.00";
    payrate[1].payCode = 02; payrate[1].payRate = "RM 10.00";
    payrate[2].payCode = 03; payrate[2].payRate = "RM 15.00";
    payrate[3].payCode = 04; payrate[3].payRate = "RM 20.00";
    
	int option =0;
	int totalHours = 0;
	string employeeCode;
    int numberofReport =0;
    
    
	cout << "<<Payroll for Hourly Employee>>" << endl;
	cout << "1-> Show all employee" << endl;
	cout << "2-> Process Payroll" << endl;
	cout << "3-> Exit" << endl;

	cout << "Enter Option: ";
	cin >> option;
	
	
	if(option ==2){do{
		cout << "Enter Employee Code or -1 to exit: ";
		cin >> employeeCode;
	    for(int i=0;i<10;i++){
		if (employee[i].empNo == employeeCode){
			cout << "Name: " << employee[i].name << endl;
			reportsummary[i].name = employee[i].name;}
		else if(employeeCode == "-1"){	cout << "Summary Report"<< endl;
	cout << endl;
	cout << "No\t" << "EmpCode\t" << "Name\t" << "Job\t" << "Salary\t" << endl;
	for (int z=0;z < numberofReport; z++){
		cout << z+1 <<"\t" << reportsummary[z].empCode << "\t" << reportsummary[z].name <<"\t" <<reportsummary[z].job <<"\t" << reportsummary[z].payRate << endl;	
	} return 0; }
		
		else {
	        cout << "invalid code" << endl;
			return 0;};    
			cout << "Pay rate: ";  
			for(int j=0;j<4;j++){if(employee[i].payCode == payrate[j].payCode){
				cout << payrate[j].payRate;
			reportsummary[i].payRate = payrate[j].payRate;}
			} cout << endl;
			cout << "Job Description: "; 
			for(int k=0;k<4;k++){if(employee[i].jobCode == jobdescription[k].jobCode){
				cout << jobdescription[k].description;
			reportsummary[i].job = jobdescription[k].description;
			numberofReport++;}
			} cout << endl;
			reportsummary[i].empCode = employeeCode;
			cout << "Enter total working hours: ";
		    cin >> reportsummary[i].hours;
			break;
			
		}} while (employeeCode != "-1");}
	

	

    if(option ==3){
    	return 0;
	}

	
	return 0;
}
