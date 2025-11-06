//print the gretest and smallest of n integers
#include<iostream>
using namespace std;
int main(){
	int n,i,j,a[10],temp;
cout<<"enter the n size"<<endl;
cin>>n;
for(i=0;i<n;i++){
	cin>>a[i];
}
for(i=0;i<n;i++){
	cout<<a[i]<<" ";
}
for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(a[i]<a[j]){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
}
cout<<endl;
for(i=0;i<n;i++){
	cout<<a[n]<<" ";
}
}

