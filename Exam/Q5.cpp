#include<iostream>
using namespace std;

class Calculator{
	public:
		Calculator(int a,int b){
			try{
				if(b==0){
					throw b;
				}
				else{
					cout << "Division : " << a/b << endl;
				}
			}
			catch(int val){
				cout << "Can't divide by xero";
			}	
		}
		Calculator(int a,int b,int c=0){
			cout << "Addition: " << a+b+c << endl;
		}
		Calculator(int a,int b,int c=0,d=0){
			cout << "Substraction: " << a-b-c-d << endl;
		}
		Calculator(int a,int b,int c=0,int d=0,int e=0){
			cout << "Multiplication: " << a*b*c*d*e << endl;
		}
};
int main(){
	Calculator c(24,12,2);
	
	
}
