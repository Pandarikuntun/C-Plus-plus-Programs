//substraction outside the logic
#include<iostream>
using namespace std;
class div{
	float a;
	float b;
	public:div(){
		a=10;
		b=20;
	}
	public:div(float x,float y){
		a=x;
		b=y;
	}
	void dis(){
		cout<<a<<"\t"<<b<<endl;
	}
	 
	div operator /(div &obj);
	
};
div div::operator /(div &obj){
		div temp;
		temp.a=a/obj.a;
		temp.b=b/obj.b;
		return temp;
	}
	
int main(){
	int c,d;
	cin>>c>>d;
	div obj1,obj2(c,d);
	obj1=obj2/obj1;
	obj1.dis();
}

