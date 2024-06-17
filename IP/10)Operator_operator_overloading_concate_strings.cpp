#include<iostream>
using namespace std;

class con_cate{
	
	string x;
	
	public:
		con_cate(string s={0}){
			x=s;
		}
		
		con_cate operator +(con_cate &c2){
			con_cate c3;
			c3.x=x+c2.x;
			return c3;
		}
		
		void print(){
			cout<<"\n\n\t"<<x<<"\n";
		}
};
main(){
	
	con_cate c1("Java");
	con_cate c2("Script");
	
	con_cate c3=c1+c2;
	
	c3.print();
}