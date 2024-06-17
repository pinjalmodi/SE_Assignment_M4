#include<iostream>
using namespace std;

class addition{
	
	private :
		int a ;
		
		public:
			
			void enter_a(){
			
			cout<<"\n\n\t Enter value for a";
			cin>>a;
		}
};
class addition_1{
	
	protected :
		int b;
		
		public:
			void enter_b(){
			
			cout<<"\n\n\t Enter value for b";
			cin>>b;
}
};

class addition_2 : public addition_1 , public addition

 {
 	public :
 		int c;
 		
 		public :
 			
 			void enter_c(){
			 
 			cout<<"\n\n\t Enter value for c";
 			cin>>c;
 }
			void calc(){
			//Can not add value for a because a is private
			cout<<"\n\n\t Addition is "<<b+c;
}
};
main(){
	addition_2 obj;
	obj.enter_a();
	obj.enter_b();
	obj.enter_c();
	obj.calc();
}
