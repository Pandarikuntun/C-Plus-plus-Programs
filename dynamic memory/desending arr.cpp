///descending order of array
#include<iostream>
using namespace std;
int main(){
	int i,j,n,*p,temp;
	cout<<"enter the size"<<endl;
	cin>>n;
	p=new int[n];
	if(p==NULL)
	cout<<"memory is not allocated"<<endl;
	else
	cout<<"memory is allocated\nenter the array eliments"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	cout<<"original array :";
	for(i=0;i<n;i++){
		cout<<*(p+i)<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(p+i)<*(p+j)){
			temp=*(p+i);
			*(p+i)=*(p+j);
			*(p+j)=temp;
	}
}
}
cout<<"sorted desending array :";
	for(i=0;i<n;i++){
		cout<<*(p+i)<<" ";
	}
	delete p;
}
