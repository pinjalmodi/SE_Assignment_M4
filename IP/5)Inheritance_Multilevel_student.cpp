#include<iostream>
using namespace std;

class Student{
	protected:
		int rollno;

	public:
		void get_stu(){
			cout<<"\n\n\t Enter rollno";
			cin>>rollno;
		}	
	
};
class Test : public Student{
	protected:
		int sub1,sub2;
		
	public:
		void get_test(){
			cout<<"\n\n\t Enter Marks of Sub1";
			cin>>sub1;
			cout<<"\n\n\t Enter Marks of Sub2";
			cin>>sub2;
		}
};
class result : public Test{
	protected:
		int total;
		
		public:
			void get_total(){
				cout<<"\n\n\t Total is"<<sub1+sub2;
				
			}
			void print(){
				cout<<"\n\n..........................";
				cout<<"\n\n\t Rollno:"<<rollno;
				cout<<"\n\n\t Sub1:"<<sub1;
				cout<<"\n\n\t Sub2:"<<sub2;
				cout<<"\n\n\t Total:"<<sub1+sub2;
			}
};	
main(){
	result r1;
	r1.get_stu();
	r1.get_test();
	r1.get_total();
	r1.print();
}