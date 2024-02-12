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
		
        int Search(int num){
            if(number==num){
                cout << "Train number= " << number << endl
                     << "Train name= " << name << endl
                     << "Train source= " << source << endl
                     << "Train Destination = "<< destination << endl
                     << " Train time= " << time << endl;  
            }
        }
		int number(){
			return number;
		}
};

int main(){
	int n,i;
	
	cout << "Enter the number of records: ";
	cin  >> n;
	
	Railway_res_sys t[n],t;
	
	Railway_res_sys::Header();
    
    for(i=0;i<n;i++)	
    	t[i].getData();
    	
    int num;
		cout << "Enter train number";
		cin >> num;	
		
    for(i=0;i<n;i++){
        t[i].Search(num);
    }
    
	int cmp=t.number();
	
}
