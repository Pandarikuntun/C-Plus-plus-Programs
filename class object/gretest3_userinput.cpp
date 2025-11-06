//print gretest of three members and average of three with class and object user input
//gretest in inside class
//average in out side class
#include<iostream>
using namespace std;
class great{
	int x;
	int y;
	int z;
public:	void gre(){
	cout<<"enter the three number"<<endl;
	cin>>x>>y>>z;
	x>y && x>z ? cout<<"x = "<<x : y>z ? cout<<"y = "<<y: cout<<"z = "<<z;
	}
	avg();
};

great :: avg(){
	cout<<"enter the three number"<<endl;
	cin>>x>>y>>z;
	cout<<"\navg ="<<(x+y+z)/3<<endl;
}
int main(){
	great obj1,obj2;
	
	obj1.gre();
	obj2.avg();
return 0;
}
