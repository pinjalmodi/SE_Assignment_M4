//scope of resolution with argument without return type..

#include<iostream>
using namespace std;

class calc{
	
	private : 
	int a;
	
	public :
			void get_values(int x){
				a=x;
			}
			void square(int x);
			
			void cube(int x);
			
			
};
inline void calc :: square(int x){
	cout<<"\n\n\t Square is"<<a*a;
}
inline void calc::cube(int x){
	cout<<"\n\n\t Cube is"<<a*a*a;
}

main(){
	
	calc c1;
	int a;
	cout<<"\n\n\t Enter a";
	cin>>a;
	
	c1.get_values(a);
	c1.square(a);
	c1.cube(a);
}