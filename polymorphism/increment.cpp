#include<iostream>
using namespace std;
class inc{
	int x;
	protected: int y;
	public : inc(){
		x=10;
		y=20;
	}
	public:inc(int a,int b){
		x=a;y=b;
	}
	void operator ++(){
		++x;
		++y;
	}
	void disp(){
		cout<<x<<" "<<y<<endl;
	}
};
int main(){
	int a,b;
	cin>>a>>b;
	inc obj1,obj2(a,b);
	++obj1;
	++obj2;
	obj1.disp();
	obj2.disp();
	return 0;
}
