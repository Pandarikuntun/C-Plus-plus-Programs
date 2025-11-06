//printarithmetic calculations using class and object
#include<iostream>
using namespace std;
class arith{
	public: int x,y;
	void sum(){
		x=10;
		y=20;
		cout<<"x+y="<<x+y<<endl;
	}
	void sub(){
		x=10;
		y=20;
		cout<<"x-y="<<x-y<<endl;
	}
	void mul(){
		x=10;
		y=20;
		cout<<"x*y="<<x*y<<endl;
	}
	div();
};
	arith ::div(){
		x=100;
		y=20;
		cout<<"x/y="<<x/y<<endl;
	}
int main(){
	arith obj;
	obj.sum();
	obj.sub();
	obj.mul();
	obj.div();
	return 0;
}
