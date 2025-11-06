#include<iostream>
using namespace std;
class name{
	int x;
	public: name(){
		x=0;
	}
	name(int a){
		x=a;
	}
	void sum(){
		cout<<x<<endl;
	}
	name operator +(name &obj4){
		name temp;
		temp=x+obj4.x;
		return temp;
	}
};
int main(){
	name obj,obj1(10),obj2(20);
	obj=obj1+obj2;
	obj.sum();
}
