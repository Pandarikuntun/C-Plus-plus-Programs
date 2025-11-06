// print gretest of three
#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cin>>x>>y>>z;
	x>y && x>z ? cout<<x<<" is gretest" : y>z ? cout<<y<<" is gretest" :cout<<x<<" is gretest";
}
