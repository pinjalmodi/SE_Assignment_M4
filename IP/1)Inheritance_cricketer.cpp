#include<iostream>
using namespace std;

class cricketer{

protected :
 string name;
 int id;
 string team;
 int total_matches;
 
 public :	
 
 		void get_cric(){
 			cout<<"\n\n\t Enter Cricketer name";
 			cin>>name;
 			cout<<"\n\n\t Enter Cricketer id";
 			cin>>id;
 			cout<<"\n\n\t Enter Cricketer team";
 			cin>>team;
 			cout<<"\n\n\t Total matches";
 			cin>>total_matches;
		 }	
		 void print_cric(){
		 	cout<<"\n\n\t Name"<<name;
		 	cout<<"\n\n\t id"<<id;
		 	cout<<"\n\n\t team"<<team;
		 	cout<<"\n\n\t Total matches"<<total_matches;
		 }
};

class batsman : public cricketer{
	private :
		int total_runs;
		int sp_runs;
		int bst_prf_matches;
		int avg_runs;
		
		public:
			void input_data(){
				cout<<"\n\n\t Enter Total runs";
				cin>>total_runs;
				cout<<"\n\n\t Enter special runs";
				cin>>sp_runs;
				cout<<"\n\n\t Best performance matches";
				cin>>bst_prf_matches;
			}
			
			void calc(){
			
				avg_runs=(total_runs+sp_runs)/total_matches;
				cout<<"\n\n\n\n\t Average runs"<<avg_runs;
			}
			
			void disp(){
				cout<<"\n\n\t Total runs"<<total_runs;
				cout<<"\n\n\t Sp_runs"<<sp_runs;
				cout<<"\n\n\t best Performance Matches"<<bst_prf_matches;
				cout<<"\n\n\t Average runs"<<avg_runs;
			}
};
main(){
	batsman b;
	b.get_cric();
	b.print_cric();
	b.input_data();
	b.calc();
	b.disp();	
	
	}