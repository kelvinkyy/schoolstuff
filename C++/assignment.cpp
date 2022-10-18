#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

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
	int payRate;
};

struct ReportSummary{
    string empCode;
    string name;
    string job;
    int payRate;
	int hours;
};

struct Records{
    string empCode;
    string name;
    string job;
    int payRate;
};

struct Employee employee[10];

struct Records record[10];

int checkCode(string employeeCode){
	if(employeeCode == "-1"){
		return -1;
	}
	else
	for(int i=0; i<10; i++){ 
	if(employee[i].empNo == employeeCode)
	return i;
	} return -999;
}

int main(){
	
	struct ReportSummary reportsummary[100];

	
	employee[0].empNo = "E1001"; employee[0].name = "John"; employee[0].jobCode = "A01"; employee[0].payCode = 01; employee[0].hireDate.day= "01"; employee[0].hireDate.month ="01";employee[0].hireDate.year = "2020";
	employee[1].empNo = "E1002"; employee[1].name = "Ali"; employee[1].jobCode = "A02"; employee[1].payCode = 02; employee[1].hireDate.day= "02"; employee[1].hireDate.month ="02";employee[1].hireDate.year = "2020"; 
	employee[2].empNo = "E1003"; employee[2].name = "Abu"; employee[2].jobCode = "A03"; employee[2].payCode = 03; employee[2].hireDate.day= "05"; employee[2].hireDate.month ="05";employee[2].hireDate.year = "2020";
	employee[3].empNo = "E1004"; employee[3].name = "Desmond"; employee[3].jobCode = "A04"; employee[3].payCode = 04; employee[3].hireDate.day= "23"; employee[3].hireDate.month ="06";employee[3].hireDate.year = "2020";
	employee[4].empNo = "E1005"; employee[4].name = "Jonathan"; employee[4].jobCode = "A02"; employee[4].payCode = 04; employee[4].hireDate.day= "21"; employee[4].hireDate.month ="04";employee[4].hireDate.year = "2020";
	employee[5].empNo = "E1006"; employee[5].name = "Cedric"; employee[5].jobCode = "A05"; employee[5].payCode = 04; employee[5].hireDate.day= "21"; employee[5].hireDate.month ="02";employee[5].hireDate.year = "2021";
	employee[6].empNo = "E1007"; employee[6].name = "Jimmy"; employee[6].jobCode = "A05"; employee[6].payCode = 03; employee[6].hireDate.day= "21"; employee[6].hireDate.month ="04";employee[6].hireDate.year = "2020";
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
    
    payrate[0].payCode = 01; payrate[0].payRate = 9;
    payrate[1].payCode = 02; payrate[1].payRate = 10;
    payrate[2].payCode = 03; payrate[2].payRate = 15;
    payrate[3].payCode = 04; payrate[3].payRate = 20;
    
	int option =0;
	int totalHours[100];
	int index = 0;
	string employeeCode;
    int numberofReport =0;
    bool foundDuplicate = false;
    int total = 0;
    
    do{
	cout << "<<Payroll for Hourly Employee>>" << endl;
	cout << "1-> Show all employee" << endl;
	cout << "2-> Process Payroll" << endl;
	cout << "3-> Exit" << endl;
	cout << endl;

	cout << "Enter Option: ";
	cin >> option;
	
	if(option > 3 || option <-1 || option ==0) {
		cout << "INVALID OPTION!" << endl;
	}
	
	
	if(option == 2){do{
	    cout << "Enter Employee Code or -1 to exit: ";
		cin >> employeeCode;
		index = checkCode(employeeCode);
		if (index == -999){
		cout << "INVALID CODE!" << endl;
		continue;}
		if (index == -1){
			cout << setprecision(2) << fixed;
			cout << "Summary Report"<< endl;
	        cout << endl;
	        cout << "No\t" << "EmpCode\t" << "Name\t" << "Job\t\t" << "Salary\t" << endl;
	        for (int z=0;numberofReport > z; z++){
		    cout << z+1 <<"\t" << reportsummary[z].empCode << "\t" << reportsummary[z].name <<"\t" <<reportsummary[z].job <<"\t\t" <<"RM "<< totalHours[z+1]*reportsummary[z].payRate << endl;	
	        }
	        cout << endl;
	        for(int u=0; u<numberofReport;u++){
				total = total + totalHours[u+1]*reportsummary[u].payRate;
			} cout << "\t\t\t\tTOTAL:  RM" << total << endl;
			option = 0;
			continue;
			 }
		
		for (int p=0; p<numberofReport; p++) {
             if (employeeCode == reportsummary[p].empCode)
                 foundDuplicate = true; 
    }
		if(foundDuplicate == true){
			cout << "Sorry! The employee code is already processed. " << endl;
		    foundDuplicate = false; }
		else {
		cout << "Name: " << employee[index].name << endl;
			reportsummary[numberofReport].name = employee[index].name;
			reportsummary[numberofReport].empCode = employee[index].empNo;
			
		cout << "Pay rate: ";  
			for(int j=0;j<4;j++){if(employee[index].payCode == payrate[j].payCode){
				cout << payrate[j].payRate;
			reportsummary[numberofReport].payRate = payrate[j].payRate;}
			} cout << endl;
		
		cout << "Job Description: "; 
			for(int k=0;k<6;k++){if(employee[index].jobCode == jobdescription[k].jobCode){
				cout << jobdescription[k].description << endl;
			reportsummary[numberofReport].job = jobdescription[k].description;
			numberofReport++;
			}
	}cout << "Enter total working hours: ";
		cin >> totalHours[numberofReport];
		if(totalHours[numberofReport] < -1) {
			cout << "INVALID NUMBER OF HOURS" << endl;
			break;
		}
		
		foundDuplicate = false;
	}}while(index != -1);}
	
    if(option == 1){
    	for(int o=0;o<10;o++){
    	for(int k=0;k<6;k++){if(employee[o].jobCode == jobdescription[k].jobCode){
			record[o].job = jobdescription[k].description;}}}
			
		for(int o=0;o<10;o++){	
		for(int j=0;j<4;j++){if(employee[o].payCode == payrate[j].payCode){
			record[o].payRate = payrate[j].payRate;	}}}
    	
    	cout << setw(10)<<"EmployeeNo" << setw(10) << "Name"<< setw(15) << "Job"<< setw(10) << "Pay Rate"<< setw(20) << "Hire Date" << endl;
    	cout << endl;
    	for(int g=0;g<10;g++){
    	cout <<setw(10)<< employee[g].empNo <<setw(10)<< employee[g].name <<setw(15)<<record[g].job <<setw(5) <<"RM "
		<< record[g].payRate<<"/hour" <<setw(10)<< employee[g].hireDate.day<<"/"<<employee[g].hireDate.month<<"/"<<employee[g].hireDate.year<< endl;
		cout << endl;
	}}
	    cout << endl;}while (option != 3);
	
	if(option == 3){ 
	       fstream dataFile;
           dataFile.open("payroll.txt", ios::out);
           
           dataFile << setprecision(2) << fixed;
		   dataFile << "Summary Report"<< endl;
	       dataFile << endl;
	       dataFile << "No\t" << "EmpCode\t" << "Name\t" << "Job\t\t" << "Salary\t" << endl;
	       for (int z=0;numberofReport > z; z++){
		   dataFile << z+1 <<"\t" << reportsummary[z].empCode << "\t" << reportsummary[z].name <<"\t" <<reportsummary[z].job <<"\t\t" <<"RM "<< totalHours[z+1]*reportsummary[z].payRate << endl;	
	        }
	       dataFile << endl;
	       for(int u=0; u<numberofReport;u++){
				total = total + totalHours[u+1]*reportsummary[u].payRate;
			} dataFile << "\t\t\t\tTOTAL:  RM" << total << endl;
			
			cout << "Check payroll.txt" << endl;
	}
	

	
	return 0; }
	

