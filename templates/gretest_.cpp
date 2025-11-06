//without return type without arguments
//gretest of three
#include<iostream>
using namespace std;
template<typename f>
void great(){
	f a,b,c;
	cin>>a>>b>>c;
	f x=a;
	f y=b;
	f z=c;
	cout<<"greatest :";
	((x>y)&&(x>z)) ? cout<<x<<endl : y>z ? cout<<y<<endl : cout<<z<<endl;
}
int main(){
	great<int>();
}
