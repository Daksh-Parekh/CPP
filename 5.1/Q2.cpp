#include<iostream>
using namespace std;

class Cricket{
	public:
		void getOver(){
			cout << "Over: "  << endl;
		}
};
class T20Match : public Cricket{
	public:
		void getOver(){
			cout << "20 Overs in T20."<< endl << endl;
		}
};
class TestMatch : public Cricket{
	public:
		void getOver(){
			cout << "90 Overs per day in Test Match." << endl;
		}
};

int main(){
	T20Match t20;
	t20.getOver();
	
	TestMatch testm;
	testm.getOver();
}
