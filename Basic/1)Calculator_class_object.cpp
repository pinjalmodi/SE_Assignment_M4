//Simple Calculator using class
#include<iostream>
using namespace std;
class calculator{
		private :
		int a,b;
		
		public :
		void get_values(){
			cout<<"\n\n\t Enter value for a";
			cin>>a;
			cout<<"\n\n\t Enter value for b";
			cin>>b;
		}
		
		void addition(){
			cout<<"\n\n\t Addition is"<<a+b;
		}
		
		void subtraction(){
			cout<<"\n\n\t Subtraction is"<<a-b;
		}
		void multiplication(){
			cout<<"\n\n\t Multiplication is"<<a*b;
		}	
		void division(){
			cout<<"\n\n\t Division is"<<a/b;
		}
};

main(){
	calculator a1,a2;
	
	cout<<"\n\n\t Values for a1";
	a1.get_values();
	a1.addition();
	a1.subtraction();
	a1.multiplication();
	a1.division();
	
	cout<<"\n\n\t Values for a2";
	a2.get_values();
	a2.addition();
	a2.subtraction();
	a2.multiplication();
	a2.division();

}