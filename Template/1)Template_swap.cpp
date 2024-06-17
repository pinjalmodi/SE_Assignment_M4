//a program of to swap the two values using template

#include<iostream>
using namespace std;

template <class I>
void my_swap( I x,I y)
{
	I z;
	cout<<"\n\n\t Before swap x:"<<x;
	cout<<"\n\n\t Before swap y:"<<y;
	z=x;
	x=y;
	y=z;
	cout<<"\n\n\t swapped x:"<<x;
	cout<<"\n\n\t swapped y:"<<y;
}
main(){
	int a,b;
	cout<<"\n\n\t Enter value for a";
	cin>>a;
	cout<<"\n\n\t Enter value for b";
	cin>>b;
	my_swap(a,b);
}