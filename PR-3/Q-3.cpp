#include<iostream>
using namespace std;

class A{
	protected:
		int id,salary,contact;
		string name,role,co_name,address,e_mail;
		double experience;
		static int idcounter;
	public:
		void setDataA(){
			id=idcounter++;
			cout << "Id: " << id << endl;
			cout << "Enter name: ";
			cin  >> name;
			cout << "Enter role: ";
			cin  >> role;
		}
		void getDataA(){
			cout << "ID: " << id << endl
				 << "Name: " << name << endl
				 << "Role: " << role << endl << endl << endl;
		}
};
class B : public A{
	public:
		void setDataB(){
			cout << "Enter salary: ";
			cin  >> salary;
			cout << "Enter Experience: ";
			cin  >> experience;
		}
//		void getDataB(){
//			cout << "Salary: " << salary << endl
//				 << "Experiencec: " << experience << endl;
//		}
};
class C : public B{
	public:
		void setDataC(){
			cout << "Enter company name: ";
			cin  >> co_name;
			cout <<"Enter Address: ";
			cin  >> address;
		}
		void getDataC(){
			cout << "Name: " << name << endl
				 << "Role: " << role << endl
				 << "Salary: " << salary << endl << endl << endl;
		}
//		void getDataC(){
//			cout << "Company Name: " << co_name << endl
//				 << "Address: " << address <<endl;
//		}
};
class D : public C{
	public:
		void setDataD(){
			cout << "Enter E-mail: ";
			cin  >> e_mail;
			cout << "Enter Contact Number: ";
			cin  >> contact;
		}
		void getDataD(){
			cout << "ID: " << id << endl
				 << "Name: " << name << endl
				 << "Role: " << role << endl
				 << "Salary: " << salary << endl
				 << "Experiencec: " << experience << endl
				 << "Company Name: " << co_name << endl
				 << "Address: " << address <<endl
				 << "E-mail: " << e_mail << endl
				 << "Contact Number: " << contact << endl;
		}
};
int A::idcounter=101;

int main(){
	D emp;
	
	emp.setDataA();
	emp.setDataB();
	emp.setDataC();
	emp.setDataD();
	
	
	emp.getDataA();
//	emp.getDataB();
	emp.getDataC();
	emp.getDataD();
}
