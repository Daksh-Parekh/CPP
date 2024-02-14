#include<iostream>
using namespace std;

class Distance{
	int km,meter;
	public:
		void setData(){
			cout << "Enter Km: ";
			cin  >> km;
			cout << "Enter Meter: ";
			cin  >> meter;
		}
		Distance operator+(Distance a){
			Distance tmp;
			tmp.km=km+tmp.km;
			tmp.meter=meter+a.meter;
			tmp.meter/1000;
			tmp.meter%1000;
			
			return tmp;
		}
		void getData(){
			cout << "Km: " << km << endl
				 << "Meter: " << meter << endl;
		}
};
int main(){
	Distance d1,d2,sum;
	d1.setData();
	d2.setData();
	
	d1.getData();
	d2.getData();
	
	sum=d1+d2;
	cout << "sum: " << endl;
	sum.getData();
}
