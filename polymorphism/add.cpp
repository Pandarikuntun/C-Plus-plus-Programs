#include<iostream>
using namespace std;
class add{
	int x;
	int y;
	public:add(){
		x=10;
		y=20;
	}
	public:add(int a,int b){
		x=a;
		y=b;
	}
	void disp(){
		cout<<x<<endl;
		cout<<y<<endl;
	}
	add operator +(add &obj){
		add temp;
		temp.x=x+obj.x;
		temp.y=y+obj.y;
		return temp;
	}
};
int main(){
	int a,b;
	cin>>a>>b;
	add obj1,obj2(a,b);
	obj1=obj1+obj2;
	obj1.disp();
}
