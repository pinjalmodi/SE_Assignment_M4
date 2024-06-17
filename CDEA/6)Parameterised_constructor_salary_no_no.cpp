//to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructor
#include<iostream>
using namespace std;

class Employee{
	private :
		string name;
		int emp_id;
		int salary;
		
	public:
		Employee(string n,int ei,int s){
			name=n;
			emp_id=ei;
			salary=s;
		}
		void print_salary(){
			cout<<"\n\n\t Name :"<<name;
			cout<<"\n\n\t Emp_id :"<<emp_id;
			cout<<"\n\n\t salary :"<<salary;
		}
		void performance_ap(){
			if(salary>=30000){
				salary=salary+5000;
			}
			cout<<"\n\n\t Salary After appraisal :"<<salary;
		}
};
main(){

Employee e1("Pinjal",1005,30000);
e1.print_salary();
e1.performance_ap();
}