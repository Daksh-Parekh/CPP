#include<iostream>
using namespace std;

class Shape{
	protected:
		int area,r;
		string color;
	public:
		Shape(){
			cout << "Enter the Length of shape: ";
			cin  >> area;
			cout << "Enter the color of shape: ";
			cin  >> color;
			cout << "Enter value of r: ";
			cin  >> r;
		}
		void getData(){
			cout << "Area: " << area << endl
				 << "Colour: " << color << endl;
		}
		virtual int formula()=0;
};
class Rectangle : public Shape{
		int l,b;
		public:
			int formula(){
			return r*area;
		}
};
class Circle : public Shape{
	public:
	int formula(){
		return 3.14*r*r;
	}
};

int main(){
	Rectangle r1;
	Circle c1;
	
	
	cout << endl <<  "Area of Rectangle: " << r1.formula()<< endl;
	
	cout << endl << "Area of Circle: "<< c1.formula() <<endl;
	
}
