//arithmetic calculation
#include<iostream>
using namespace std;
template<typename g,typename h>
class name{
	g x;
	h y;
	public:name(){
		x=10;
		y=20;
	}
	name(g a,g b){
		x=a;
		y=b;
	}
	void sum(){
		cout<<x+y<<endl;
	}
};
int main(){
	/*template<typename g,typename h>
	g a;
	h b;*/
	name<int,int>obj1;
	name<float,int>obj2;
	name<float,float>obj3;
	cin>>a>>b;
	name<int,int>obj4(a,b);
	cin>>a>>b;
	name<float,int>obj5(a,b);
	cin>>a>>b;
	name<float,float>obj6(a,b);
	obj1.sum();
	obj2.sum();
	obj3.sum();
	obj4.sum();
	obj5.sum();
	obj6.sum();
	return 0;
}
