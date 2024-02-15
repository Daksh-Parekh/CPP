#include<iostream>
using namespace std;

class Message{
	private:
		string str;
	public:
		Message(){
			cout << "Enter a string: ";
			cin  >> str;
		}
		
		void Name(){
			cout << "String: " <<str << endl;
		}
		
		void Name(string s1){
			cout << "Default String: " << s1  << " " << str <<  endl;
		}
		
		void Name(string s1,string s2){
			cout << "Full Name: " << s1  << " " << str << " " << s2 <<  endl;
		}
};

int main(){
	Message s1;
	
	s1.Name();
	
	cout << "----------------------------------------" << endl;
	s1.Name("Parekh");
	
	cout << "----------------------------------------" << endl;
	s1.Name("Parekh","Bharatkumar");
}
