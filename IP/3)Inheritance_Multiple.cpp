//Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)

#include<iostream>
using namespace std;

class person{
	
	protected :
		string mname;
		int age;
		
	public :
			void person_details(){
			cout<<"\n\n\t Enter name";
			cin>>mname;
			cout<<"\n\n\t Enter age";
			cin>>age;
		}
};
class student{
	protected :
		int per;
		
		public:
		void student_details(){
			cout<<"\n\n\t Enter per";
			cin>>per;
		}
};
class teacher : public person,public student{
	int salary;
	
	
	public:
	void teacher_details(){
		cout<<"\n\n\t Enter salary";
		cin>>salary;
	}
	
	void print(){
		cout<<"\n\n\t Name:"<<mname;
		cout<<"\n\n\t Age:"<<age;
		cout<<"\n\n\t Per:"<<per;
		cout<<"\n\n\t Salary:"<<salary;
	}
};
main(){
	teacher t1;
	t1.person_details();
	t1.student_details();
	t1.teacher_details();
	t1.print();
}