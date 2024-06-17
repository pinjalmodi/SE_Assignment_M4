//scope of resolution & with argument with return type.

#include<iostream>
using namespace std;

class calc{
	
	private:
		int n;
	
	public:
		
		int get_details(int a){
			n=a;
		}
		
		inline int square(int a);
		
		inline int cube(int a);
		
};
inline int calc :: square(int a){
	return a*a;
	
}
inline int calc :: cube(int a){
	return a*a*a;
}

main(){
	
	calc c1;
	int n;
	cout<<"\n\n\t Enter value for n";
	cin>>n;
	
	c1.get_details(n);
	int b;
	b=c1.square(n);
		cout<<"\n\n\t Square is"<<b;
	
	int c;
	c=c1.cube(n);
	cout<<"\n\n\t Cube is"<<c;
}