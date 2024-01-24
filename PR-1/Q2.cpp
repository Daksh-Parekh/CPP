#include<iostream>
using namespace std;

class Time{
	private:
		int hr,sec,min;
	public:
		void setSecond(){
			cout << "Enter Seconds: ";
			cin  >> sec;
		}
		void getSecond(){
			cout << "Second :" <<sec;
		}
		void Conversion(){
			hr = sec/3600;
			min = sec%3600;
			min /=60;
			sec =sec % 60;
			
			
			cout << endl <<  hr <<":" << min << ":" << sec ;
		}
};

int main(){
	Time t;
	
	t.setSecond();
	t.getSecond();
	t.Conversion();
	
}

