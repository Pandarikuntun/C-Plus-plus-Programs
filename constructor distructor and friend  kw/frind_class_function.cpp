#include<iostream>
using namespace std;
class num{
	public:int x;
	protected:int y;
	public:num(){
		x=10;
		y=20;
	}
	friend class num1;
	mult(num obj);
};
class num1{
	int z;
	public:num1(){
		z=30;
	}
	void sum(num obj){
		cout<<obj.x+obj.y+z<<endl;
	}
};
void mult(num obj){
	int i;
	for(i=1;i<=10;i++){
		cout<<obj.x<<" x "<<i<<" = "<<obj.x*i<<endl;
	}
}
int main(){
	num obj;
	num1 obj1;
	obj1.sum(obj);
	mult(obj);
	
	
}
