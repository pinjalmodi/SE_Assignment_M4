//Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)

#include<iostream>
using namespace std;

class student{
	
	protected:	
	int rollno;
	
	public:
		void stu_details(){
		
	cout<<"\n\n\t Enter rollno";
	cin>>rollno;
}
};

class Test : public student{
	protected:
	int sub1;
	int sub2;
	
	public:
		void test_details(){
	cout<<"\n\n\t Sub1";
	cin>>sub1;
	cout<<"\n\n\t Enter Sub2";
	cin>>sub2;
		}
};

class result : public Test {
	
	int total_marks;

	public:
		void result_details(){
			cout<<"\n\n\t Roll No:"<<rollno;
			cout<<"\n\n\t Sub1:"<<sub1;
			cout<<"\n\n\t Sub2:"<<sub2;
			cout<<"\n\n\t Total:"<<sub1+sub2;
			
		}

};
main(){
	result r1;
	r1.stu_details();
	r1.test_details();
	r1.result_details();
}