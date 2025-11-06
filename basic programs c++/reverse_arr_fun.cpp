//reverse of array elements
#include<iostream>
using namespace std;
void rev(int ar[],int n);
int main(){
	int n,i,a[n];
	cout<<"enter size arr"<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"original array"<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}	
	cout<<endl;
	cout<<"reverse array"<<endl;
	for(i=n-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
	cout<<endl<<"function output"<<endl;
	rev(a,n);
	return 0;

}
void rev(int ar[],int n){
	int i;
	for(i=n-1;i>=0;i--){
		cout<<ar[i]<<" ";
	}
}
