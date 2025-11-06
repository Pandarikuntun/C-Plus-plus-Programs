//with return type and without argument
//gretest of three
#include<iostream>
using namespace std;
template<typename f>
f great(){
	f x=1.2;
	f y=5.5;
	f z=5.3;
	return ((x>y)&&(x>z)) ? x : y>z ? y : z;
}
int main(){
	cout<<great<float>(/*1.2,2.3,5.2*/)<<endl;
		cout<<great<int>()<<endl;
}
