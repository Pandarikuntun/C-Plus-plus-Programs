// dynamic memory using new keyword
#include<iostream>
using namespace std;
int main(){
	int *p=new int(4);
	int *r=new int;
	cout<<"enter the 2nd number"<<endl;
	cin>>*r;
	(*p<*r)? cout<<*r<<endl:cout<<*p<<endl;
}
