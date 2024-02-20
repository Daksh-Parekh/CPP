#include<iostream>
using namespace std;

class A{
	public:
		virtual void add(int a,int b)=0;
		
		A(){
			cout << "--Add--" << endl;
		}
};

class B : public A{
	int a=12,b=10;
	public:
		B(){
			cout << a+b << endl;
		}
		
		void add(int a,int b){
			cout << "Done." << endl;
		}
};

int main(){
	B a;
}
