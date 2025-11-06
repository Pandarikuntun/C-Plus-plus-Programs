// multiplication table printing using parameterised constructor 
//member function is inside and out side with single calling
#include<iostream>
using namespace std;
class table{
	int a;
	public: table(int x){
		a=x;
	}
	int mt(int a){
		int i;
		for(i=1;i<=10;i++){
			cout<<a<<" x "<<i<<" = "<<a*i<<endl;
		}
		cout<<endl;
		return 0;
	}
	int mt1(int a);
};
int  table::mt1(int a){
	int i;
	for(i=1;i<=10;i++){
		cout<<a<<" x "<<i<<" = "<<a*i<<endl;
	}
	return 0;
}
int main(){
	int a;
	table obj(a);
	cout<<"enter the number"<<endl;
	cin>>a;
	obj.mt(a);
	obj.mt1(a);
	return 0;
}

