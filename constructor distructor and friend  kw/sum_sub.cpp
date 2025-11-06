#include<iostream>
using namespace std;
class name{
	private: int x;
	protected: int y;
	public: name(){
		x=10;
		y=20;
	}
	name(int a,int b){
		x=a;
		y=b;
	}
	void sum(){
		cout<<x+y<<endl;
	}
	friend void sub(name);
};
void sub(name obj){
	cout<<obj.y-obj.x<<endl;
}
int main(){
	name obj1,obj2(100,50);
	obj1.sum();
	obj2.sum();
	sub(obj1);
	sub(obj2);
	return 0;
}
