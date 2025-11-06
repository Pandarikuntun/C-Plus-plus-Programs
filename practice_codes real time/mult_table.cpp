/*Write a C++ program that takes an integer n as input 
and prints the multiplication table of that number up to 10.*/
#include<iostream>
using namespace std;
int main(){
	int x,i;
	cout<<"enter the number :";
	cin>>x;
	for(i=1;i<=10;i++){
		cout<<x<<" x "<<i<<" = "<<x*i<<endl;
	}
}
