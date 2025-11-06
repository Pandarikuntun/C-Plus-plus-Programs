/*factorial of a number 
using function with return type and without arguments*/
#include<iostream>
using namespace std;
int fact(int x){
	int i,f=1;
	for(i=1;i<=x;i++){
		f=f*i;
	}
	return f;
}
int main(){
	int x;
	cout<<"enter tha x value :";
	cin>>x;
	int z=fact(x);
	cout<<x<<" factorial is "<<z;
	return 0;
}
