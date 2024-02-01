#include<iostream>
using namespace std;

class Hotel{
	private:
		int id,rate,est_year,staff_qty,room_qty;
		string name,type;
		static string location;
		static int idcount;
	public:
		Hotel(){
			id=idcount++;
			cout << "Welcome to my hotel" << endl;
			cout << "ID: " << id << endl;
			setData();
		}
		
		
		void setData(){
//			cout << "Enter id: ";
//			cin  >> id;
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
		
		static void header(){
			cout << "ID\t NAME\t TYPE\t RATING\t LOCATION\t EST.YEAR\t STAFF\t ROOM\t\n====== ======= =======  ======== ========\t ==========  \t====== \t======" << endl;
		}
		void getData(){
			cout << id << "\t" << name << "\t" << type << "\t   "
				 << rate << "\t  " << location << " \t\t" << est_year << "    \t" <<  staff_qty << "   \t" << room_qty << endl;
		} 
	
};

string Hotel::location = "Surat";
int Hotel::idcount= 1;


int main(){
	
	
	
	int n;
	cout << "Enter No. of Hotels: ";
	cin  >> n;
	
	Hotel h[n];
	
	Hotel::header();
	for(int i=0;i<n;i++){
		h[i].getData();	
	}
}

