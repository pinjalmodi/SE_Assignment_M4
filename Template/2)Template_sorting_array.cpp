//Write a program of to sort the array using templates
#include<iostream>
using namespace std;

template<class I>
void sort_ing(I x[5]){
	int i,j,temp;
for(i=0;i<5;i++){
	for(j=i+1;j<5;j++){
		if(x[i]>x[j]){
			temp=x[i];
			x[i]=x[j];
			x[j]=temp;
		}
	}
	cout<<"\n\n\t"<<x[i];
}
}
main()
{
	int a[5],i;
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	sort_ing(a);
}

