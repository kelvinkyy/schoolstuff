#include <iostream>


using namespace std;

//exchange the value of x and y
void swap (int &x, int &y)
{
int temp;
temp = x;
x = y;
y = temp;
}


int partition (int a[], int first, int last)
{ //use first item as pivot
int pivot = a[first];
int curIndex = first;
for (int m = first+1; m <= last; m++) {
if (a[m] < pivot) {
curIndex++;
swap (a[m], a[curIndex]);
}
}
swap (a[first], a[curIndex]);
return curIndex;
}


void bubbleSort (int a[], int n)
{
bool sorted = false;
int temp;
for (int pass = 1; pass < n && !sorted; pass++) {
sorted = true;
for (int i = 0; i < n - pass; i++) {
int inext = i + 1;
if (a[i] > a[inext]) {
temp = a[inext];
a[inext] = a[i];
a[i] = temp;
sorted = false;
}
}
}
}

void insertionSort (int a[], int n)
{
for (int unsorted = 1; unsorted < n; unsorted++) {
int index = unsorted;
int value = a[index];
for( ; index > 0 && a[index-1] > value; index--)
a[index] = a[index-1];
a[index] = value;
}
}

void selectionSort (int a[], int n)
{
    for (int first=0; first < n-1; first++) 
    {  
        int minIndex = first;
        int minValue = a[minIndex];
        for (int i = first+1; i < n; i++) {
            if (a[i] < minValue) { 
                minIndex = i;
                minValue = a[i];
            }
	   }
	 a[minIndex] = a[first];
       a[first] = minValue;

    }
}


void quicksort (int a[], int first, int last)
{
int pivotIndex;
if (first < last) {
pivotIndex = partition (a, first, last);
quicksort (a, first, pivotIndex-1);
quicksort (a, pivotIndex+1, last);
}
}

int main(){
	
	char method;
	int arr[10];
	
	cout << "PLEASE ENTER 10 NUMBERS" << endl;
	for(int i = 0; i<10; i++){		
		cin >> arr[i];
	}
	cout << "PLEASE ENTER THE SORTING METHOD OF CHOICE" << endl;
	cout << "A) Bubble sort" << endl;
	cout << "B) Insert sort" << endl;
	cout << "C) Selection sort" << endl;
	cout << "D) Quick sort" << endl;
	
	
	cin >> method;
	method = tolower(method);
	if(method == 'a'){
		bubbleSort(arr,10);
	}
	else if(method == 'b'){
		insertionSort(arr,10);
	}
	else if(method == 'c'){
		selectionSort(arr,10);
	}
	else if(method == 'd'){
		quicksort(arr,0,9);
	}
	for(int i =0; i<10; i++){
		cout << arr[i]<< " ";
	}
	return 0;
}

