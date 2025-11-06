// arithmatc calculation using one object with diff fun input by user
//with return and with arguments
#include<iostream>
using namespace std;
class arith{
	public: int x,y;
	int add(int x,int y){
		return x+y;
	}
	int sub(int x,int y){
		return x-y;
	}
	int mul(int x,int y){
		return x*y;
	}
	int div(int x,int y){
		if(y==0)
		return 0;
		else
		return x/y;
	}
};
int main(){
	arith obj1;
	cout<<obj1.add(10,20)<<endl;
	cout<<obj1.sub(10,20)<<endl;
	cout<<obj1.mul(10,20)<<endl;
	cout<<obj1.div(10,20)<<endl;
}
