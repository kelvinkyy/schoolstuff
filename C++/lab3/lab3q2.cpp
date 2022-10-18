#include <iostream>
#include "lab3q2.h"

using namespace std;

		Rectangle::Rectangle(double w, double l){
			width = w;
			length = l;
		};	    
		void Rectangle::setWidth(double w){
			width = w;
		};
		double Rectangle::getWidth(){
			return width;
		};
		void Rectangle::setLength(double l){
			length = l;
		};
		double Rectangle::getLength(){
			return length;
		};
		
		double Rectangle::CalculateArea(){			
			
			return length * width;
		};
		bool Rectangle::SmallerThan(double a){
			bool b;
		    if((length*width)< a){
		    	b = true;
			}
			else{
				b = false;
			}
			return b;			
		};
		
		int main(){
			
			Rectangle r1(50,60);
			Rectangle r2(20,30);
			
			if(r1.SmallerThan(r2.CalculateArea())){
				cout << "THE FIRST TRIANGLE IS SMALLER THAN THE SECOND TRIANGLE" << endl;
			}
			else{
				cout << "THE FIRST TRIANGLE IS BIGGER THAN THE SECOND TRIANGLE" << endl;
			}
			
			
			return 0;
		}
