//factorial with class and object
#include<iostream>
using namespace std;
class math{
	public: int n;
	int fact(int a){
		n=a;
		int i,f=1;
		for(i=1;i<=n;i++)
		f*=i;
		return f;
	}
};
main(){
	int x;
	math obj,obj1;
	cout<<obj.fact(5)<<endl;
	cout<<"enter the number"<<endl;
	cin>>x;
	cout<<obj1.fact(x)<<endl;
}
