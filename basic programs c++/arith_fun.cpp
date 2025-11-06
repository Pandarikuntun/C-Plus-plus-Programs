//using functions arithmatic calculation
#include<iostream>
using namespace std;
void add();
void sub();
void mult();
void div();
int main(){
	int x,y;
	cout<<"enter the x and y values :";
	cin>>x>>y;
	add();
	add();
	mult();
	div();	
	return 0;
}
void add(){
	int x,y;
	cout<<x+y;
}
void sub(){
	int x,y;
	cout<<x-y;
}
void mult(){
	int x,y;
	cout<<x*y;
}
void div(){
	int x,y;
	cout<<x/y;
}
