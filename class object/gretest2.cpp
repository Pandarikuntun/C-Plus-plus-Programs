//gretest of two number using class and object
#include<iostream>
using namespace std;
class num{
	public: int x,y;
	int gretest();
};
int num :: gretest(){
	return x>y? x:y;
}
int main(){
	num obj;
	obj.x=10;
	obj.y=20;
	cout<<obj.gretest()<<endl;
	return 0;
}
