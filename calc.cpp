#include<iostream>
using namespace std;

int main(){
	int a ;
	int b;
	cout<<"Enter the first number: \n";
	cin>>a;
	cout<<"Enter the second number: \n";
	cin>>b;
	char c;
        cout<<"Enter the operation: ";
	cin>>c;
	switch(c){
		case'+':
		     cout<<"The sum is: "<<a+b<<"\n";
		     break;

		case '-':
		     cout<<"The difference is: "<<a-b<<"\n";
		     break;

		default:
                      cout<<"Invalid operation \n";

		 }
	return 0;
}
