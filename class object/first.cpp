//creat a variable with class
#include<iostream>
using namespace std;
class name{
	public: int x,y;
	void sum(){
		x=10;
		y=20;
		cout<<"x+y= "<<x+y;
	}
};
main(){
	name obj;
	obj.sum();
}
