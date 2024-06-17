#include<iostream>
using namespace std;

class Date{
	
	private:
		int day;
		int month;
		int year;
		
		public:
			Date(){
				day=30;
				month=12;
				year=2020;
			}
			void print_data(){
				cout<<"\n\n\t Day:"<<day;
				cout<<"\n\n\t Month:"<<month;
				cout<<"\n\n\t year:"<<year;
			}
			void cond_data(){
				if(day>31){
					cout<<"\n\n\t Invalid day";
				}
			}
			
};
main(){

Date d1;
d1.print_data();
d1.cond_data();
}