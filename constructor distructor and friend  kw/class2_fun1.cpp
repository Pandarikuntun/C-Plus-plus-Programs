#include<iostream>
using namespace std;
class num{
	int x;
	protected: int y;
	public: int z;
	public: num(int a,int b,int c){
		x=a;
		y=b;
		z=c;
	}
	friend void sum(num);
	friend void num1(num obj);
	
};
void sum(num obj){
	cout<<obj.x+obj.y+obj.z<<endl;
}
class num1{
	int s;
	public:num1(int d){
		s=d;
	}
	void sub(int d,num obj){
		cout<<obj.x-d<<endl;
	}
	
};
int main(){
	num obj1;
	num1 obj2(1,2,3);
	sum();
	obj2.sub(6,obj1)
	
}
