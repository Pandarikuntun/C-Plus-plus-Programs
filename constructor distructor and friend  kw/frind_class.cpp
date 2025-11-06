#include<iostream>
using namespace std;
class name{
	int x;
	protected :int y;
	public: int z;
	name(){
		x=10;
		y=20;
		z=30;
	}
	name(int a,int b,int c){
		x=a;
		y=b;
		z=c;
	}
	void sum(){
		cout<<"sum "<<x+y+z<<endl;
	}
	friend class name1;
};
class name1{
	int i;
	public: void mult(name obj)
	{
		i=2;
		cout<<obj.x*i*obj.y*obj.z*i<<endl;
	}
};
int main(){
	name obj;
	name1 obj2(1,2,3);
	obj1.sum();
	obj2.sum();
	name1 obj3;
	obj3.mult(obj1);
	obj3.mult(obj2);
	return 0;	
}

