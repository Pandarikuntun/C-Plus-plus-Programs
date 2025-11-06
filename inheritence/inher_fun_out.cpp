/*creating one base and another inheritace class creating
one outside function is declarin in inheritance class */
#include<iostream>
using namespace std;
class base1{
	public :int x;
	public:base1(){
		x=10;
	}
		void dis_b1(){
			cout<<x<<endl;
		}
};
class base2:private base1{				//private hire cannot access the x data 
	protected:int y;					//if public x data can be accesed
	public:base2(){
		y=20;
	}
		void dis_b2(){
		cout<<x<<" "<<y<<endl;
		}
	friend void dip(base2 obj); 
};
void dip(base2 obj){						//in this function we cannot access the x data becouse declaration friend in base2 so base 2 is private it cannot acces the previus data
	cout<<obj.x+obj.y<<endl;		//protected can be access
}
int main(){
	base2 obj1;
	//obj1.dis_b1();
//	obj1.dis_b2();
	dip(obj1);
	return 0;
	
}
