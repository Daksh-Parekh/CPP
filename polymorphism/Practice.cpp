#include<iostream>
using namespace std;

class A{
	public:
		void method(){
			cout << "METHOD 1.." << endl;
		}
		void method(int a){
			cout << "METHOD 2.." << a << endl;
		}
		void method(int a,int b){
			cout << "METHOD 3.." << a << b << endl;
		}
};

int main(){
	A obj;
	
	obj.method();
	obj.method(21);
	obj.method(41,42);
}

