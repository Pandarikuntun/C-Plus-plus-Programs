//without return type and with argument
//gretest of three
#include<iostream>
using namespace std;
template<typename a>
void great(a x,a y,a z){
	((x>y)&&(x>z)) ? cout<<x<<endl : y>z ? cout<<y<<endl : cout<<z<<endl;
}
int main(){
	great<int>(1,2,3);
	great<float>(2.3,4.5,44.2);
}
