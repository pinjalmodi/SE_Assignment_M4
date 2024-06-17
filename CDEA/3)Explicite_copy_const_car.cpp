//Write a C++ program to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables.
#include<iostream>
using namespace std;

class car{
	
	private: 
	string company;
	string model;
	int year;
	
	public:
	//	car(){
			
	//	}
		car(string c,string m,int y){
			company=c;
			model=m;
			year=y;
		}
		car(car &c){
			company=c.company;
			model=c.model;
			year=c.year;
		}
		void print_car(){
			cout<<"\n\n\t Company"<<company;
			cout<<"\n\n\t Model"<<model;
			cout<<"\n\n\t Year"<<year;
		}
		
};
main(){
	car c1("Maruti","D'zire",2020),c2;
	c1.print_car();
	c2=c1;
	c2.print_car();
}