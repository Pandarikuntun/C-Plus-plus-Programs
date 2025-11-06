//multiplication table using functions
#include<iostream>
using namespace std;
void mult(int y){
	int i;
	for(i=1;i<=10;i++)
	cout<<y<<" x"<<i<<" ="<<y*i<<endl;
}
int main(){
	int x;
	cin>>x;
	mult(x);
	
}
