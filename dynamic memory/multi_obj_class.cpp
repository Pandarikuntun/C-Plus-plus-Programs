#include<iostream>
using namespace std;
class name{
	private:int x;
	private:int y;
	public:name(int a,int b){
		x=a;	y=b;
	}
	~name(){
		cout<<"distructor calling"<<endl;
	}
	void sum(){
		cout<<x+y<<endl;
	}
};
int main(){
	int i,n,a,b;
	cin>>n;
	for(i=0;i<n;i++){
		name obj[i];
	}
	for(i=0;i<n;i++){
		cin>>a,b;
		obj[i].sum(a,b);
	}
}
