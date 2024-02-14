#include<iostream>
using namespace std;

class Input{
	protected :
		int a,b,c,d;
	public :
		void setData(){
			cout << "Enter first number";
			cin  >> a;
			cout << "Enter second number";
			cin  >> b;
			cout << "Enter third number";
			cin  >> c;
			cout << "Enter fourth number";
			cin  >> d;
		}
		void getData(){
			cout << "First number: " << a <<endl
				 << "Second number: " << b <<endl
				 << "Third number: " << c <<endl
				 << "Fourth number: " << d <<endl;
		}
};

class Calculations : public Input{
	int a,b,c,d,e;
	public :
		float calculate(int a, int b,int c=0){
			if(a != NULL && b!= NULL){
				cout << "Division: " << a/b <<endl;
			}
			else if(a != NULL && b!= NULL && c!= NULL){
				cout << "Subtraction: " << a-b-c << endl;
			}
			
		}
};

int main(){
	Calculations op;
	
	op.calculate(20,10,30);
}
