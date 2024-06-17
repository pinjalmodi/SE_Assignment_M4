#include<iostream>
using namespace std;

class rectangle{
	
	private :
		int length;
		int width;
		
		public :
			
			void area(){
				int a;
				cout<<"\n\n\t Enter length";
				cin>>length;
				cout<<"\n\n\t Enter width";
				cin>>width;
				a=length*width;
				cout<<"\n\n\t Area of Rectangle is"<<a;
			}
			
			void perimiter(){
				int p;
				p=2*(length+width);
				cout<<"\n\n\t Perimiter of rectangle is"<<p;
			}
};

main(){

rectangle r1;
r1.area();
r1.perimiter();
}