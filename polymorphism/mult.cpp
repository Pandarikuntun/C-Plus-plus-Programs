//substraction outside the logic
#include<iostream>
using namespace std;
class mult{
	int a;
	int b;
	public:mult(){
		a=10;
		b=20;
	}
	public:mult(int x,int y){
		a=x;
		b=y;
	}
	void dis(){
		cout<<a<<"\t"<<b<<endl;
	}
	 
	mult operator *(mult &obj);
	
};
mult mult::operator *(mult &obj){
		mult temp;
		temp.a=a*obj.a;
		temp.b=b*obj.b;
		return temp;
	}
int main(){
	int c,d;
	cin>>c>>d;
	mult obj,obj1,obj2(c,d);
	obj=obj1*obj2;
	obj.dis();
}

