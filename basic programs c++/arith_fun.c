//using functions arithmatic calculation
#include<iostream>
using namspace std;
int add();
int sub();
int mult();
int div();
int main(){
	int x,y;
	cout<<"enter the x and y values :";
	cin>>x>>y;
	cout<<add()<<"\n";
	cout<<add()<<"\n";
	cout<<mult()<<"\n";
	cout<<div()<<"\n";	
}
int add(){
	int x,y;
	return x+y;
}
