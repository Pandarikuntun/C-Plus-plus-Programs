#include<iostream>
using namespace std;
class decr{
	int x;
	protected: int y;
	int z;
	public: decr(){
		x=5;
		y=10;
		z=15;
	}
	public: decr(int a,int b,int c){
		x=a;	y=b;	z=c;
	}
	void operator --(){
		--x;
		--y;
		--z;
	}
	void disp(){
		cout<<x<<"\t"<<y<<"\t"<<z<<endl;
	}
};
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	decr obj1,obj2(a,b,c);
	--obj1; 
	--obj2;
	obj1.disp();
	obj2.disp();
}
