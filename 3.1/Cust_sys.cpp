#include<iostream>
using namespace std;

class Customer{
	private:
	 	int id,age,simcard_vald;
		string name,city,brand_name;
		long long int mobile_no;
	public:
		void setData(){
//			cout << "Enter ID: ";
//			cin  >> id;
//			cout << "Enter Name: ";
//			cin  >> name;
			cout << "Enter Age: ";
			cin  >> age;
//			cout << "Enter City: ";
//			cin  >> city;
//			cout << "Enter Mobile Number: ";
//			cin  >> mobile_no;
//			cout << "Enter Simcard Validity: ";
//			cin  >> simcard_vald;
//			cout << "Enter Telecom Brand Name: ";
//			cin  >> brand_name;
		}
		void getData(){
	
			cout << "ID: " << id << endl
				 << "Name: "<< name << endl
				 <<setAge()
				 //<< "Age: " << age << endl
				 << "City: "<< city << endl
				 << "Mobile Number: "<< mobile_no << endl
				 << "Simcard Validity: "<< simcard_vald<< endl
				 << "Telecom Brand Name: "<< brand_name;
		}
		int setAge(){
			if(age>=18 && age<=70){
				cout << "Age: " << age;
			}
			else{
				cout << "You not eligible for new simcard";
			}
		}
		void setcity(){
			
			cout << "Press 1 for SURAT city " << endl
				 << "Press 2 for AHEMDABAD city " << endl
				 << "Press 3 for RAJKOT city " << endl
				 << "Press 4 for VADODARA city " << endl;
				 
			int choice;
			switch(choice){
				case 1:  
					cout << "Surat";
					break;
				case 2:  
					cout << "AHEMDABAD";
					break;
				case 3:  
					cout << "RAJKOT";
					break;
				case 4:  
					cout << "VADODARA";
					break;
				default:
					cout << "Please select from the above city";
			}
		}
};

int main(){
	Customer c1,c2,c3,c4,c5;
	
	c1.setData();
	cout << endl << endl << "---Details of Student---"<< endl;
	c1.getData();
	cout << endl << endl << "---Age validation---"<< endl;
	c1.setAge();
	cout << endl << endl << "---Select city---"<< endl;
	c1.setcity();
}
