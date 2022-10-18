#include <iostream>

using namespace std;

class Circle{
	private: 
	    double radius;
	public: 
	    Circle(){ 
		    radius = 0;
	    }
	    Circle(double r){
	    	radius = r;
	    	
		}
		void setRadius(double r){
			radius = r;
		}
		double getRadius(){
			return radius;
		}
};



int main(){
	
   Circle c1;
   Circle c2(10);
   

	return 0;
}
