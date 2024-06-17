//program to implement a class called Bank Account that has
//private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;

class Bank_Account{
private:
	int acc_no;
	int bal;
	
	public:
		Bank_Account(){
		acc_no=10005;
		bal=0;
		}
		
		
		Bank_Account(Bank_Account &b){
			acc_no=b.acc_no;
			bal=b.bal;
		}
		void print(){
			cout<<"\n\n\t AccountNo"<<acc_no;
			cout<<"\n\n\t Balance"<<bal;
		}
		void deposite(){
			
		int d;
		cout<<"\n\n\t Enter deposite";
		cin>>d;
		bal=bal+d;
		cout<<"\n\n\t Balance After deposite is"<<bal;
	}
	void withdraw(){
		int w;
		cout<<"\n\n\t Enter Withdraw";
		cin>>w;
		if(bal>=w){
			bal=bal-w;
			cout<<"\n\n\t Balance After withdraw is"<<bal;
		}
		else{
			cout<<"\n\n\t Insufficient balance";
		}
	}
};

main(){
Bank_Account b1,b2;

b1.print();
b1.deposite();
b1.withdraw();
b2=b1;
b2.print();
}