#include<iostream>
using namespace std;
class base{
	protected: int x;
	public:void base_dis(){
		x=10;
		cout<<x<<endl;
	}
};
class child1 : private base{
	public:int y;
	void child1_dis(){
		x=20;
		y=30;
		cout<<x<<"	"<<y<<endl;
	}
};
class child2 : public child1{
	int z;
	public: child2_dis(){
		//x=1;
		y=2;
		z=3;
		cout<</*x<<"	"<<*/y<<"	"<<z<<endl;
	}
};
int main(){
	child2 obj;
	//obj.base_dis();
//	obj.child1_dis();
	obj.child2_dis();
	base obj3;
	obj3.base_dis();
	child1 obj5;
	obj5.child1_dis();
}
