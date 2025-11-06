#include<iostream>
using namespace std;
class arith{
	int x,y;
	public: arith(){
		x=10;
		y=20;
	}
	arith(int a,int b){
		x=a;
		y=b;
	}
	arith(int a){
		x=a;
	}
	void sum(){
		cout<<"sum is "<<x+y<<endl;
	}
	void disp(){
		cout<<x<<endl;
	}
	~arith(){
		cout<<"destructor is calling"<<endl;
	}
	void even_odd(){
		if(x%2==0)
		cout<<x<<" is even"<<endl;
		else
		cout<<x<<" is odd"<<endl;
	}
};
int main(){
	arith obj,obj2(20),obj3(20,30);
	obj.sum();
	obj3.disp();
	obj2.even_odd();
}
