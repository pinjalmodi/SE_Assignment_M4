#include<iostream>
using namespace std;

class Numswap{
	
	int x,y;
	
	public:
		void get_nums(){
			cout<<"\n\n\t Enter Number x";
			cin>>x;
			cout<<"\n\n\t Enter Number y";
			cin>>y;
		}
		friend void result(Numswap s1){
			s1.x=s1.x+s1.y;
			s1.y=s1.x-s1.y;
			s1.x=s1.x-s1.y;
		cout<<"\n\n\t After Swapping x is"<<s1.x;
		cout<<"\n\n\t After Swapping y is"<<s1.y;
		
		}
};
main(){

Numswap s1;
s1.get_nums();
result(s1);
}