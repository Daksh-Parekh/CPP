#include<iostream>
using namespace std;

class Supermarket_Sys{
	private:
		int number,qty,price;
		string name;
		double disc;
		static int idcounter;
	public:
		void setData(){
			number = idcounter++;
			cout << "ID: " << number << endl;
			cout << "Enter Item Name: ";
			cin  >> name;
			cout << "Enter Quantity: ";
			cin  >> qty;
			cout << "Enter Price: ";
			cin  >> price;
			cout << "Enter Discount: ";
			cin  >> disc;
		}
		void getData(){
			cout << "Number: " << number << endl
				 << "Name: " << name << endl
				 << "Quantity: " << qty << endl
				 << "Price: " << price << endl
				 << "Discount: " << disc << endl << endl;
		}
		
		
};

int Supermarket_Sys ::idcounter=101;

int main(){
	string user_id,pass;
	
	cout << "Enter User NAME: ";
	cin  >> user_id;
	cout << "Enter Password: ";
	cin  >> pass;
	
	int n,i;
	cout << "Enter Number of records: ";
	cin  >> n;
	Supermarket_Sys c[n];
	
	for(i=0;i<n;i++){
		c[i].setData();
	}
	
	int b1;

	b1:
	string user,pas;
	cout << "Enter user NAME to login: ";
	cin  >> user;
	cout << "Enter password to login: ";
	cin  >> pas;

	if(user==user_id && pas==pass){
		for(i=0;i<n;i++){
			c[i].getData();	
		}
	}
	else{
		cout << "Enter valid details" << endl << endl;
		goto b1;
	}

}
