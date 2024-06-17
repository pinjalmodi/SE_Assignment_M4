//Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;

class addition{
	float x[5];
	float y[5];
	int i;
	
	public:
	void operation(int a[5],int b[5]){
		for(i=0;i<5;i++){
		
	
	x[i]=a[i];
	y[i]=b[i];

	cout<<"\t"<<x[i]+y[i];
}
cout<<"\n";
}

	void operations_1(float a[5],int b[5]){
		for(i=0;i<5;i++){
		
		x[i]=a[i];
		y[i]=b[i];
	
		cout<<"\t"<<x[i]+y[i];
	}
	cout<<"\n";
	}
	
	void operations_2(int a[5],float b[5]){
		for(i=0;i<5;i++){
		
		x[i]=a[i];
		y[i]=b[i];
	
		cout<<"\t"<<x[i]+y[i];
	}
	cout<<"\n";
	}
};

main(){
	addition obj;
	int a[5]={1,2,3,4,5};
	float a1[5]={1.1,1.2,1.3,1.4,1.5};
	int b[5]={1,1,1,1,1};
	float b1[5]={2.1,2.2,2.3,2.4,2.5};

obj.operation(a,b);
obj.operations_1(a1,b);
obj.operations_2(a,b1);
}


