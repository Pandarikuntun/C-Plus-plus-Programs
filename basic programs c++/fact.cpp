//factorial of a number
#include<iostream>
using namespace std;
int main(){
	int x,fact=1,i;
	cout<<"enter the number\n";
	cin>>x;
	for(i=1;i<=x;i++){
		fact=fact*i;
	}
	cout<<x<<" factorial is "<<fact;
}
