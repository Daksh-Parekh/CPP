#include<iostream>
#include "class_hotel.cpp"
using namespace std;

int main(){
	
	int n;
	
	cout << "Enter No. of Hotels: ";
	cin  >> n;
	
	Hotel h[n];
	for(int i=0; i<n ;i++){
		h[i].setData();
	}
	
	cout << endl << "--Hotels--" << endl;
	for(int i=0; i<n; i++){
		cout << "Details of Hotel-- " << i+1 << endl;
		h[i].getData();
	}
}
