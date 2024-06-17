//Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;

class rect{
	
	protected:
		int length;
		int width;
		
		public:
			void get_length(){
				cout<<"\n\n\t Enter length";
				cin>>length;
				cout<<"\n\n\t Enter width";
				cin>>width;
			}
			void print(){
				cout<<"\n\n\t Length:"<<length;
				cout<<"\n\n\t Width:"<<width;
			}

};
class calc : public rect{
	
	int area;
	
	public: 
		void calculate(){
			area=length*width;
			cout<<"\n\n\t Area is"<<area;
		}
};
main(){
	calc c1;
	c1.get_length();
	c1.print();
	c1.calculate();
}