#include<iostream>
using namespace std;

class A{
	protected:
		int a;
	public:
		void setDataA(){
			cout << "Enter value of A: ";
			cin  >> a;
		}
		void getDataA(){
			cout << "A: " << a << endl;
		}
};

class B: public A{
	protected:
		int b;
	public:
		void setDataB(){
			cout << "Enter value of B: ";
			cin  >> b;
		}
		void getDataB(){
			cout << "B: " << b << endl;
		}
		void sum(){
			cout << "Sum: " << a+b << endl;
		}
};

class C : public A{
	protected:
		int c;
	public:
		void setDataC(){
			cout << "Enter value of C: ";
			cin  >> c;
		}
		void getDataC(){
			cout << "C: " << c << endl;
		}
};

class D : public B, public C{
	int d;
	public:
		void setDataD(){
			cout << "Enter value of D: ";
			cin  >> d;
		}
		void getDataD(){
			cout << "D: " << d << endl;
		}
		void sum(){
			cout << "Sum: " << B::a+b+c+d << endl;
		}
};

int main(){
	D s;
	
	s.B::setDataA();
	s.setDataB();
	s.setDataC();
	s.setDataD();	
	
	s.B::getDataA();
	s.getDataB();
	s.getDataC();
	s.getDataD();
	
	s.sum();
}
