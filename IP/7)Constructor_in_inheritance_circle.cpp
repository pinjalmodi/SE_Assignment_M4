//Program to illustrates the use of Constructors in multilevel inheritance
//Area of circle..

#include<iostream>
using namespace std;

class circle{
	
	protected:
		float pie;
		
		public:
			circle(){
				pie=3.14;
			}
};
class radius: public circle{
	
	protected:
		int r;
		
		public:
			void enter_radius(){
				cout<<"\n\n\t Enter radius";
				cin>>r;
			}
			void calc(){
				cout<<"\n\n\t Area of circle is"<<pie*r*r;
			}
};
main(){

radius obj;
obj.enter_radius();
obj.calc();
}