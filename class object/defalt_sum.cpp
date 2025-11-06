//defaxt values is fixed
#include<iostream>
using namespace std;
void sum(int x=10, int y=20, int z=30);
int main(){
	sum();
	sum(10);
	sum(10,20);
	return 0;
}
void sum(int x,int y,int z){
	cout<<x+y+z<<endl;
}
