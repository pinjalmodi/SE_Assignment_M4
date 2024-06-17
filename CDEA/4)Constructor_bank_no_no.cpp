// implement a class called Bank Account that has
//private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account.

#include<iostream>
using namespace std;

class Bank_account{

private: 
int acc_no;
int balance;
	
	
	public:
		
		Bank_account(){
			acc_no=100005;
			balance=0;
		}
			void print(){
			cout<<"\n\n\t Account No="<<acc_no;
			cout<<"\n\n\t Balance="<<balance;
		}
		void deposite(){
			int d;
			cout<<"\n\n\t Enter Depoite";
			cin>>d;
			balance=balance+d;
		}
		void withdraw(){
			int w;
			cout<<"\n\n\t Enter Withdraw";
			cin>>w;
			if(balance>=0){
			balance=balance-w;
			}
			else{
				cout<<"\n\n\t Insufficient balance";
			}
		}
		void balance_display(){
			cout<<"\n\n\t Current Balance is="<<balance;
		}
};
main(){

Bank_account b1;
b1.print();
b1.deposite();
b1.withdraw();
b1.balance_display();
}