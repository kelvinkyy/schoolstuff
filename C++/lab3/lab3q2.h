#ifndef lab3q2_h
#define lab3q2_h


class Rectangle{
	private: 
	    double width;
	    double length;
	public: 
	    Rectangle(double w, double l);
	    
		void setWidth(double );
		double getWidth();
		void setLength(double );
		double getLength();		
		double CalculateArea();
		bool SmallerThan(double );
};

#endif
