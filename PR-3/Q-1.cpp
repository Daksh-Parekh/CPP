#include<iostream>
using namespace std;

class Shape{
	protected:
		int h,w;
	public:
//		Shape(){
//			this->setHeigth();
//			this->setWidth();	
//		}	
		
		void setHeigth(){
			cout << "Enter height: ";
			cin  >> h;
		}
		void setWidth(){
			cout << "Enter Width: ";
			cin  >> w;
		}
		
		void getHeigth(){
			cout << "Heigth: " << h <<endl;
		}
		void getWidth(){
			cout << "Width: " << w <<endl;
		}
};

class Triangle : public Shape{
	int areat;
	public:
		void setAreaTriangle(){
			areat = 0.5*h*w;
			cout << "Area: " << areat << endl;
		}
};

class Rectangle : public Triangle{
	int arear;
	public:
		void setAreaRectangle(){
			arear = h*w;
			cout << "Area: " << arear;
		}
};

int main(){
	Rectangle r;
	
	
	r.setHeigth();
	r.setWidth();
	
	r.setAreaTriangle();
	
	r.setAreaRectangle();
}
