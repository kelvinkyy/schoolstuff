/* Name: Kee Yong Yik
   Date: 30/4/2021
   Time: 8.57 a.m.
   purpose: even more cin 
   
   */

#include <iostream>

using namespace std;

int main () {
	
	float length = 0;
	float width = 0;
	float area = 0;
	float perimeter = 0;
	//declare two integer variable called length and width. initialise them with 0
	cout << "Length of the triangle: ";
	cin >> length;
	
	cout << "Width of the triangle: ";
	cin >> width;
	//prompt user to input triangle width and length 
	//calculate the area and perimeter of the triangle
	cout << "area of the triangle: " << length * width / 2; endl;
	cout << "perimeter of the triangle: " << length + width + width + length; endl; 

	
	//display the rectangle area and perimeter 
	
	
	
	
	
	return 0;
}
