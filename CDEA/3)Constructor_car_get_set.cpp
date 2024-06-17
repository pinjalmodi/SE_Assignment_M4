//to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables.
#include<iostream>
using namespace std;

class Car{
	
	private:
		string company;
		string model;
		int year;
		
		public:
			Car(){
			company="Maruti";
			model="swift D'zire";
			year=2020;
			
			}

			void printvalue(){
				cout<<"\n\n\t Company="<<company;
				cout<<"\n\n\t model="<<model;
				cout<<"\n\n\t year="<<year;
			}
};
main(){

Car c1;
c1.printvalue();

}