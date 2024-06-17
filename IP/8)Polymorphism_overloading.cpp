//program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading
#include<iostream>
using namespace std;

class math{
int x,y;
float f;
	
	public:
		void operations(int a,int b){
			x=a;
			y=b;
			cout<<"\n\n\t Addition is:"<<x+y;
		}
		void operations(int a,double c){
			x=a;
			f=c;
			cout<<"\n\n\t Sub is"<<x-f;
			
		}
		void operations(int a, int b,float c){
			x=a;
			f=c;
			y=b;
			cout<<"\n\n\t Mul is"<<x*y*f;
		}
		void operations(double c,int a){
			x=a;
			f=c;
			cout<<"\n\n\t Mul is"<<f/x;
		}
		
};
main(){
		math obj;
		obj.operations(10,20);
		obj.operations(10,5.5);
		obj.operations(5,5,5.5);
		obj.operations(25.5,5);
}