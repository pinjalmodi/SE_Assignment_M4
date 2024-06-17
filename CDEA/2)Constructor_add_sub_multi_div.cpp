//Add,sub,multi,div using constructor
#include<iostream>
using namespace std;

class calc{
	
	int x,y;
	
	public:
		calc(){
			x=250;
			y=10;
		}
		
		void add(){
			cout<<"\n\n\tAddition is"<<x+y;
		}
		void sub(){
			cout<<"\n\n\tSubtraction is"<<x-y;
		}
		void multi(){
			cout<<"\n\n\tMultiplication is"<<x*y;
		}
		void div(){
			cout<<"\n\n\tDivision is"<<x/y;
		}
		
};
main(){

calc c1;
c1.add();
c1.sub();
c1.multi();
c1.div();
}