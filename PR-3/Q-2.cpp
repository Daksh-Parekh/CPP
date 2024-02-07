#include<iostream>
using namespace std;

class A{
	protected:
		int n;
	public:
		void setData(){
			cout << "Enter a Number: ";
			cin  >> n;
		}
		void getData(){
			cout << "Number: " << n << endl;
		}
};

class Square: public A{
	public:
		void sqrarea(){
			cout << "Square of number: " << n*n << endl;
		}
};
class Cube: public Square{
	public:
		void cubearea(){
			cout << "Cube of number: " << n*n*n << endl;
		}
};

int main(){
	Cube a;
	
	a.setData();
	a.getData();
	a.sqrarea();
	a.cubearea();

}
