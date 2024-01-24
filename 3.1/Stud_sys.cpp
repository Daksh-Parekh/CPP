#include<iostream>
using namespace std;

class Student{
	private:	
		int id,age;
		string name,course,city,email,college;
	
	public:
		void setData(){		
			cout << "Enter ID: ";
			cin  >> id;
			cout << "Enter Name: ";
			cin  >> name;
			cout << "Enter Age: ";
			cin  >> age;
			cout << "Enter Course: ";
			cin  >> course;
			cout << "Enter City: ";
			cin  >> city;
			cout << "Enter E-mail ID: ";
			cin  >> email;
			cout << "Enter College Name: ";
			cin  >> college;
		}
		void Age(){
			if(this->age<=30){
				cout << "Age is: " << age; 
			}
			else {
				cout << "No--";
			}
		}

		
		void getData(){		
			cout << "ID: " << id << endl
				 << "Name: "<< name << endl;
				  Age(); 
			cout <<endl	 << "Course: "<< course << endl
				 << "City: "<< city << endl
				 << "E-mail ID: "<< email <<endl
				 << "College Name: "<< college <<endl;
				 
	}
};

int main(){
	Student s1,s2;
	
	s1.setData();
	s2.setData();
	

	
	s1.getData();
	cout << "-- Second Student --"<< endl;
	s2.getData();
	s1.Age();	
	s2.Age();
}
