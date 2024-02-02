#include<iostream>
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
        void setSearch(){
            int num;
            cout << "Enter train number" << endl;
            cin >> num;
            if(number==num){
                cout << "Train number= " << number << endl
                     << "Train name= " << name << endl
                     << "Train source= " << source << endl
                     << "Train Destination = "<< destination << endl
                     << " Train time= " << time << endl;
            }
            else
                cout << "Invalid number... " << endl;
        
        }
	
};

int main(){
	Railway_res_sys t,t1;
	
	Railway_res_sys::Header();
    
    for(int i=0;i<3;i++)	
    	t.getData();
    
    t.setSearch();
}