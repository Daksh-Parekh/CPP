#include<iostream>
using namespace std;

class BankAccount{
	private:
		long int acc_no,bal,cr_bal,dr_bal;
		string owner_name;
	public:
		void setData(){
			cout << "Enter acc_no: ";
			cin  >> acc_no;
			cout << "Enter Name: ";
			cin  >> owner_name;
			cout << "Enter Balance: ";
			cin  >>  bal;
		}
		
		void getData(){
			cout << endl<< "Account Number: " << acc_no << endl
				 << "Name of account holder: " << owner_name << endl
			 	 << "Account Balance: " << bal << endl;
		}
		void credit(){
			cout << "Enter a credit: ";
			cin  >> cr_bal;
			
			bal=bal+cr_bal;
			cout << endl << "Available balance after deposit: " << bal << endl;
		}
		void debit(){
			cout << "Enter a debit bal: ";
			cin  >> dr_bal;
			
			bal=bal-dr_bal;
			cout << endl << "Available balance after withdraw: " << bal << endl;
		}
};

int main(){
	BankAccount b;
	
	b.setData();
	b.getData();
	b.credit();
	b.debit();
}
