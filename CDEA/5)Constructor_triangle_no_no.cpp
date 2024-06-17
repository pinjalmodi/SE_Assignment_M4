//program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;

class Triangle{
	private:
		int ab;
		int bc;
		int ac;
		
		public:
			Triangle(){
				ab=12;
				bc=14;
				ac=24;
			}
			
			void print(){
				cout<<"\n\n\t"<<ab;
				cout<<"\n\n\t"<<bc;
				cout<<"\n\n\t"<<ac;
				
			}
			void tri_type(){
				if(ab==bc && bc==ac){
					cout<<"\n\n\tTriangle is Equilateral";
				}
				else if(ab==bc || ab==ac || bc==ac){
					cout<<"\n\n\tTriangle is isosceles";
				}
				else{
					cout<<"\n\n\tTriangle is scalene";
				}
			}

};
main(){
	Triangle t1;
	t1.print();
	t1.tri_type();
}