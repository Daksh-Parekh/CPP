#include<iostream>
using namespace std;

//class Division{
//	int a;
//	public:
//		int Divi(int a, int b){
//			return a/b;
//		}
//
//};

int main(){
	int a=10,b=0;
	
	try{
		if(b==0){
			throw b;
		}
		else{
			cout << "Div: " << a/b;
		}
	}
	catch(int val){
		cout << "Can't divide by zero" << endl;
		cout << "It's an infinite";
	}
}
