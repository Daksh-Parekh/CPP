#include<iostream>
using namespace std;

class Employee{
	private:
		int id,salary,age;
		string name,role,city,co_name;
		double experience;
	public:
		void input(){
			
			for(int i=1;i<=5;i++){
			
				cout << "Enter ID:\t";
				cin  >> id;
				cout << "Enter NAME:\t";
				cin  >> name;
				cout << "Enter AGE:\t";
				cin  >> age;
				cout << "Enter ROLE:\t";
				cin  >> role;
				cout << "Enter CITY:\t";
				cin  >> city;
				cout << "Enter EXPERIENCE: ";
				cin  >> experience;
				cout << "Enter COMPANY NAME: ";
				cin  >> co_name<<endl;
			}
		}
		void output(){
			
			for(int i=1;i<=5;i++){
				cout << "Enter ID:\t"   << id << endl
					 << "Enter NAME:\t" << name <<endl
					 << "Enter AGE:\t"  << age <<endl
					 << "Enter ROLE:\t" << role<<endl
					 << "Enter CITY:\t" << city <<endl
					 << "Enter EXPERIENCE:\t"<< experience <<endl
					 << "Enter COMPANY NAME:\t" << co_name << endl;
			}
		}
};

int main(){
	Employee e;
	
	e.input();
	cout << endl;
	e.output();
}
