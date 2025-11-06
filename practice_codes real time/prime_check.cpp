/*Write a C++ program that checks whether a 
given number is prime or not.*/
#include<iostream>
using namespace std;
int main(){
	int x,i,count=0;
	cout<<"enter the number"<<endl;
	cin>>x;
	for(i=1;i<=x;i++){
		if(x%i==0)
		count++;
	}
	if(count==2)
	cout<<x<<"is prime"<<endl;
	else
	cout<<x<<" not prime"<<endl;
}
