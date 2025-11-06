// constructor over loading 
//using two member fumction and four constructor with differend types
#include<iostream>
using namespace std;
class construct{
	int x,y;
	float z;
	public: construct(){
		x=10;
		y=20;
		z=20.3;
	}
	construct(int a,int b){
		x=a;
		y=b;
	}
	construct(int a,float b){
		x=a;
		z=b;
	}
	construct(float a,int b){
		z=a;
		y=b;
		
	}
	construct(int a,int b,float c){
		x=a;
		y=b;
		z=c;
	}
	void sum(){
		cout<<x+y-z;
	}
	void sub(){
		cout<<x+y-z;
	}
};
int main(){
	construct obj1(),obj2(2,3),obj3(2,2.5f),obj4(5.5f,2),obj5(2,3,2.5f);
	obj2.sum();
	obj3.sub();
	obj4.sum();
	obj5.sub();
}

