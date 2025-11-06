#include<iostream>
using namespace std;
class name{
	int x,y;
	float z;	
	public: name(int a,int b)    // parameteriaed constructor
	{	
	x=a;
	y=b;
	}
	name(){
	    x=10;
	    y=20;
	}
	name(int a,double b){
	    x=a;
	    z=b;
	}
	name(double a,int b){
	    x=b;
	    z=a;
	}
	name(int a,int b,int c)	{
	    x=a;
	    y=b;
	    y=c;
	}
	void add(){
	cout<<x+y<<endl;;
	}
	void add1(){
	cout<<x+z<<endl;;
	}
	};
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
name obj(a,b);
obj.add();
name obj1;
obj1.add();
name obj3(a,c);
obj3.add1();
name obj4(c,a);
obj4.add1();
name obj5(a,c);
obj5.add();
return 0;
}
