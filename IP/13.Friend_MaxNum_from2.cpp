//Find max number from two numbers using friend function
#include<iostream>
using namespace std;

class max_num{
	
	int x,y;
	
	public:
		void get_nums(){
			cout<<"\n\n\t Enter num x";
			cin>>x;
			cout<<"\n\n\t Enter num y";
			cin>>y;
		}
		
		friend void big_num(max_num m1){
			if(m1.x>m1.y){
				cout<<"\n\n\t x is max";
			}
				else{
					cout<<"\n\n\t y is max";	
			}
		}
};
main(){
max_num m1;
m1.get_nums();
big_num(m1);

}