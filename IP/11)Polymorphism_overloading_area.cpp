#include<iostream>
using namespace std;

class area{
	
	public:
	float pie=3.14;
	int r;
	int l;
	int w;
	float b;
	float h;
	
	public:
		void enter_values(){
		
			cout<<"Enter radius";
			cin>>r;
			cout<<"Enter length";
			cin>>l;
			cout<<"Enter width";
			cin>>w;
			cout<<"Enter height";
			cin>>h;
			cout<<"Enter base";
			cin>>b;
		}
		
		void area_s(float r) {
			cout<<"\n\n\tCircle"<<pie*r*r;
		}
		void area_s(int l,int w){
			cout<<"\n\n\tRectangle"<<l*w;
			
		}
		void area_s(float b,float h) {
			cout<<"\n\n\tTriangle"<<(0.5)*b*h;
		}
};
main(){
	area a1;
	a1.enter_values();
	a1.area_s(a1.r);
	a1.area_s(a1.l,a1.w);
	a1.area_s(a1.b,a1.h);
}