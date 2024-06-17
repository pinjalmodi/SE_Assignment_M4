//Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;

class student{
	
	protected :
	int rollno;
	string name;
	
	public :
		void stu_details(){
			cout<<"\n\n\t Enter rollno";
			cin>>rollno;
			cout<<"\n\n\t Enter name";
			cin>>name;
		}
	 
};
class sub{
	protected:
		int sub1;
		int sub2;
		int sub3;
		int total;
		int per;
		
		public:
			void sub_details(){
			cout<<"\n\n\t Enter sub1";
			cin>>sub1;
			cout<<"\n\n\t Enter sub2";
			cin>>sub2;
			cout<<"\n\n\t Enter sub3";
			cin>>sub3;
			total=sub1+sub2+sub3;
			per=total/3;
			}
};
class marksheet : public student, public sub {
	
	
	public :
		void marksheet_details(){
			cout<<"\n\n\t Roll No:"<<rollno;
			cout<<"\n\n\t Name:"<<name;
			cout<<"\n\n\t Sub1:"<<sub1;
			cout<<"\n\n\t Sub2:"<<sub2;
			cout<<"\n\n\t Sub3:"<<sub3;
			cout<<"\n\n\t Total:"<<total;
			cout<<"\n\n\t Percentage:"<<per;
			
		}
};
main(){
	marksheet m1;
	m1.stu_details();
	m1.sub_details();
	m1.marksheet_details();
}