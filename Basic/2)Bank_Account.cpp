#include<iostream>
using namespace std;

class bank_account{
	private : 
	string name;
	int ac_no;
	string type;
	int balance;
	
	public : 
		void assign_values(){
			cout<<"\n\n\t Enter Name";
			cin>>name;
			
			cout<<"\n\n\t Enter Account No";
			cin>>ac_no;
			
			cout<<"\n\n\t Enter Type Of Account";
			cin>>type;
			
			cout<<"\n\n\t Enter Balance";
			cin>>balance;
			
		}
		
		void deposite(){
			int depo;
			cout<<"\n\n\t Enter deposite";
			cin>>depo;
			balance=balance+depo;
			cout<<"\n\n\t Balance After Deposite is"<<balance;
		}
		
		void withdraw(){
			int withd;
			cout<<"\n\n\t Enter Amount to withdraw";
			cin>>withd;
			balance=balance-withd;
			cout<<"\n\n\t Balance After Withdraw is"<<balance;
		}

		void display(){
			cout<<"\n\n\t Name"<<name;
			cout<<"\n\n\t Balance"<<balance;
		}			
};
main(){

bank_account b1;

cout<<"\n\n\t Bank details";
b1.assign_values();
b1.deposite();
b1.withdraw();
cout<<"\n\n\t.......... Balance check........";
b1.display();
}