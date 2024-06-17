#include<iostream>
using namespace std;

class Person{
	private :
		string name;
		int age;
		string country;
		
		public :
			void get_details(){
				cout<<"\n\n\t Enter name";
				cin>>name;
				cout<<"\n\n\t Enter age";
				cin>>age;
				cout<<"\n\n\t Enter Country";
				cin>>country;
			}
			
			void set_details(){
				cout<<"\n\n\t Name is"<<name;
				cout<<"\n\n\t Age is"<<age;
				cout<<"\n\n\t Couuntry is"<<country;
			}
			
			
};
main(){
	Person p1,p2;
	cout<<"\n\n\t Enter Details";
	p1.get_details();
	p2.get_details();
	
	cout<<"\n\n\t Print Details";
	p1.set_details();
	p2.set_details();

}