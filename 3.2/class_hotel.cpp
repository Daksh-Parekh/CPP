#include<iostream>
using namespace std;

class Hotel{
	private:
		int id,rate,est_year,staff_qty,room_qty;
		string name,type;
		static string location;
		static int idcount;
	public:
		void setData(){
//			cout << "Enter id: ";
//			cin  >> id;
			id=idcount++;
			cout << "Enter Hotel Name: ";
			cin  >> name;
			cout <<"Enter Type of Hotel: ";
			cin  >> type;
			cout << "Enter Rating: ";
			cin  >> rate;
//			cout << "Enter Location: ";
//			cin  >> location;
			cout << "Enter established year: ";
			cin  >> est_year;
			cout << "Enter No. of staff: ";
			cin  >> staff_qty;
			cout << "Enter No. of room: ";
			cin  >> room_qty;
		}
		void getData(){
			cout << "ID\t: " << id << endl
				 << "Name\t: " << name << endl
				 << "Type\t: " << type << endl
				 << "Rating\t: " << rate << endl
				 << "Location: " << location << endl
				 << "Established year: " << est_year << endl
				 << "No. of staff\t: " << staff_qty << endl
				 << "No. of rooms\t: " << room_qty << endl;
		}
	
};

string Hotel::location = "Surat";
int Hotel::idcount= 1;

