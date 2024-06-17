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
			Car(string c,string m,int y){
				company=c;
				model=m;
				year=y;
			}
			void print(){
			
			cout<<"\n\n\t Company="<<company;
			cout<<"\n\n\t model="<<model;
			cout<<"\n\n\t year="<<year;
		}
};
main(){
	Car c1("Maruti","Swift D'zire",2020);
	c1.print();
	
}