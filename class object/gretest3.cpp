//print gretest of three members and average of three with class and object
//gretest in inside class
//average in out side class
#include<iostream>
using namespace std;
class great{
	int x;
	int y;
	int z;
public:	void gre(){
		x=10;
		y=20;
		z=30;
		x>y && x>z ? cout<<"x = "<<x : y>z ? cout<<"y = "<<y: cout<<"z = "<<z;
	}
	avg();
};

great :: avg(){
	 x=5;
	 y=10;
	 z=15;
	cout<<"\navg ="<<(x+y+z)/3<<endl;
}
int main(){
	great obj1,obj2;
	obj1.gre();
	obj2.avg();
return 0;
}
