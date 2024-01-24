#include<iostream>
using namespace std;

class Distance{
	public:
		int feet,inch;	
	
		void setDistance(){
			cout << "Enter feet: ";
			cin  >> feet;
			cout << "Enter inch: ";
			cin  >> inch;
		}
		void getDistance(){
			cout << "Feet: " << feet
				 << ", Inch: " << inch <<endl;
		}
		
};
int main(){
	
	Distance d1,d2,sum;
	
	d1.setDistance();
	d2.setDistance();
	
	d1.getDistance();
	d2.getDistance();
	
	sum.feet=d1.feet+d2.feet;
//
	cout << "Feet: " << sum.feet;

	sum.inch=d1.inch+d2.inch;
//	cout << "Inch: " << sum.inch;
	
	sum.feet+=(sum.inch /12);
	sum.inch = (sum.inch % 12);

	cout << endl << endl << sum.feet<< "Feet " << sum.inch << " inch";	
}
