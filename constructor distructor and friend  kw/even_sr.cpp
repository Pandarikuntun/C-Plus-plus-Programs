//even odd number series using parameterized constructor
//even member function inside and odd function member out side class
#include<iostream>
using namespace std;
class numbers{
	int x;
	public: numbers(int a){
		x=a;
	}
	void even(int a){
		int i;
		for(i=0;i<=a;i++){
			if(i%2==0)
			cout<<i<<" ";
		}
		cout<<endl;
	}
	void odd(int b);
};
void numbers :: odd(int b){
	int i;
	for(i=0;i<=b;i++){
		if(i%2!=0)
		cout<<i<<" ";
	}
	cout<<endl;
}

int main(){
	int a,b;
	cout<<"enter last number of even series :"<<endl;
	cin>>a;
	numbers obj1(a);	obj1.even(a);
	cout<<"enter last number of odd series :"<<endl;
	cin>>b;
	numbers obj2(b);	obj2.odd(b);
}
