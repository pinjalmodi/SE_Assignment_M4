#include<iostream>
#include<math.h>
using namespace std;

class Circle{
	private : 
	int radius;
	float pie;
	
	public :
	
	void area(){
		float a;
		cout<<"\n\n\t Enter Radius";
		cin>>radius;
		pie=3.14;
		a=pie*radius*radius;
		cout<<"\n\n\t Area of Circle is"<<a;
		
	}
	void circumference(){
		float c;
		c=2*pie*radius;
		cout<<"\n\n\t Circumference of circle is"<<c;
		
	}
	
};

main(){
	Circle c1;
	
	cout<<"\n\n\t For Circle 1";
	c1.area();
	c1.circumference();
}