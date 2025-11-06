//prime series
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int i,j,n,count=0;
	cout<<"enter the last number"<<endl;
	cin>>n;
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
		cout<<i<<" "<<endl;
}}}
