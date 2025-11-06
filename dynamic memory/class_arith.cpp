#include<iostream>
using namespace std;
class arith{
	private:int a;
	public:int b;
	protected: int c;
	public:arith(){
		a=10;
		b=20;
		c=30;
		cout<<"sum of defalt :"<<a+b+c<<endl;
	}
	arith(int x,int y,int z){
		a=x;
		b=y;
		c=z;
	}
	void add(){
		cout<<"sum paramitarised :"<<a+b+c<<endl;
	}
	~arith(){
		cout<<"distructor calling"<<endl;
	}
};
int main(){
	arith obj,obj1(10,30,10);
	obj1.add();
	
}
