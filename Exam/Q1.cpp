#include<iostream>
using namespace std;

class Laptop{
	private:
		string name,processor;
		int price;
	public:
		Laptop(string name,int price,string processor){
			this->name=name;
		    this->price=price;
		    this->processor=processor ;
		}
		void getData(){
			cout << "Name: " << name << endl
				 << "Price: "<< price << endl
				 <<  "Processor: "<< processor << endl;
		}
};

int main(){
	Laptop l("dell",15000,"i5");
	
	l.getData();	
}
