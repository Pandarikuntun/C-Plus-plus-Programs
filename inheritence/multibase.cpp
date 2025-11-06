#include<iostream>
using namespace std;
class base1{
	public :int x;
	base1(){
		x=10;
		}
		public:void dis_b1(){
			cout<<x<<endl;
		}
};


class base2{
	public:int y;
	base2(){
		y=20;
	}
		public:void dis_b2(){
		cout<</*x<<"	"<<*/y<<endl;		//cannot access the base 1 DM in base 2
	}
};


class dc :public base1,base2{
	public :int z;
	dc(){
		z=30;
		}
	public:void dis_dc(){
		cout<<x<<"	"<<y<<"	"<<z<<endl;
	}
	
	void sum(){
		cout<<x+y+z<<endl;
	}
	friend void sub(dc obj1);
	
};
void sub(){
	cout<<obj1.x-obj1.y-obj1.z<<endl;
}
int main(){
	dc obj;
	obj.dis_dc();
	obj.sum();
	sub(obj);
	
	
}

