#include<iostream>
#include "D:\Daksh\func.cpp"
using namespace std;

class Railway_res_sys{
	private:
		int number;
		string name,source,destination;
		double time;
	public:
		Railway_res_sys(){
			setData();
		}
		void setData(){
			cout << "Enter Train Number: ";
			cin  >> number;
			cout << "Enter Train name: ";
			cin  >> name;
			cout << "select Train Source: ";
			cin >> source;
		//	source = selectCity();
			cout << "Enter Train Destination: ";
			cin  >> destination;
			cout << "Enter Train Time: ";
			cin  >> time;
		}
		static void Header(){
			cout << "Number\tName\t\t Source\t\tDestination\tTime\t" << endl
				 << "======\t====\t\t ======\t\t===========\t====\t" << endl;
		}
		void getData(){
			cout << number << "\t" << name << "\t  " << source << "\t\t" << destination << "\t\t" << time << endl;
		}
	
};

int main(){
	Railway_res_sys t;
	
	Railway_res_sys::Header();
	
	t.getData();
}
