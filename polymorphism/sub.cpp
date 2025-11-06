//substraction outside the logic
#include<iostream>
using namespace std;
class sub{
	int a;
	int b;
	public:sub(){
		a=10;
		b=20;
	}
	public:sub(int x,int y){
		a=x;
		b=y;
	}
	void dis(){
		cout<<a<<"\t"<<b<<endl;
	}
	 sub operator -(sub &obj){
		sub temp;
		temp.a=a-obj.a;
		temp.b=b-obj.b;
		return temp;
	}
};

int main(){
	int c,d;
	cin>>c>>d;
	sub obj,obj1,obj2(c,d);
	obj=obj1-obj2;
	obj.dis();
}

