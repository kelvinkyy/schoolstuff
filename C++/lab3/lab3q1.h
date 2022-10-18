#ifndef lab3q1_h
#define lab3q1_h


class Student{
	private: 
	    std::string studentID;
	    std::string name;
	    double courseworkMark;
	    double FinalExamMark;
	public: 
	    Student(std::string sID, std::string n, double cwm, double fem);
	    calcTotalMark(double );
		void setStudentID(std::string );
		std::string getStudentID();
		void setName(std::string );
		std::string getName();
		void setcourseworkMark(double );
		double getcourseworkMark();
		void setFinalExamMark(double );
		double getFinalExamMark();
};

#endif
