#include<iostream>
using namespace std;

class Operator{
	int a;
	public:
		Operator(){
		}
		Operator(int a){
			cout << "Value: " << a << endl;
		}
		Operator operator<(Operator a){
			Operator tmp;
			tmp.a=a<a.a;
			return tmp;
		}
		
};

int main(){
	Operator o1(10);
	Operator o2(20);
	Operator o3;
	
	o3=o1<o2;
	

}
