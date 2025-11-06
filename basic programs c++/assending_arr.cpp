//assending of array elements
#include<iostream>
using namespace std;
int main(){
	int i,j,n,temp;
	cout<<"enter the size"<<endl;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"original array : ";
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	cout<<endl;
	cout<<"sorted array :"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
