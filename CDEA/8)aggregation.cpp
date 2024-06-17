#include<iostream>
using namespace std;

class address{
	
	
	public:
		string add;
		string city;
		
		address(string add,string city){
			this->add=add;
			this->city=city;
			
		}
		
		
};


class Student{
	private : address *ad;
	
	public :
		string name;
		int s_class;
		int rollno;
		int marks;
		
		Student(string name,int s_class,int rollno,int marks, address *ad){
			this->name=name;
			this->s_class=s_class;
			this->rollno=rollno;
			this->marks=marks;
			this->ad=ad;
		}
		
		void display(){
			
			cout<<"\n\n\t Name"<<name;
			cout<<"\n\n\t class"<<s_class;
			cout<<"\n\n\t rollno"<<rollno;
			cout<<"\n\n\t Marks"<<marks;
			
			cout<<"\n\n\t Address"<<ad->add;
			cout<<"\n\n\t city"<<ad->city;
		}
		
		void grade(){
			if(marks>=80 && marks<100){
				cout<<"\n\n\t A+";	
			}
			else if(marks>=70 && marks<80){
				cout<<"\n\n\t A";	
			}
			else if(marks>=60 && marks<70){
				cout<<"\n\n\t B";	
			}
			else if(marks>=35 && marks<60){
				cout<<"\n\n\t C";	
			}
			else{
				cout<<"\n\n\t Fail";
			}
		}
};

main(){
	address a("42 Yashsagar Society","Ahm");
	Student s("Pinjal",10,101,80, &a);
	
	s.display();
	s.grade();
}