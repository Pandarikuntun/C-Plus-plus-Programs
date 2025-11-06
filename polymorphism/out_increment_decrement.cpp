// increment and decrement logic using out side of class
#include<iostream>
using namespace std;
class outs{
	private:int x;
	protected:int y;
	public:outs(){
		x=10;
		y=20;
	}
	public:outs(int a,int b){
	x=a;
	y=b;
	}
	void operator ++(){
		++x;
		++y;
	}
	void disp(){
		cout<<x<<"\t"<<y<<endl;
	}
	void operator --();
};
void outs::operator --(){
	--x;
	--y;
}
int main(){
	int a,b;
	cin>>a>>b;
	outs obj,obj1(a,b);
	++obj;
	--obj1;
	obj.disp();
	obj1.disp();
}
