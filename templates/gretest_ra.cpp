//with return type and with arguments
//greatest of three
#include<iostream>
using namespace std;
template<typename a>
a great(a x,a y,a z){
	return ((x>y) && (x>z)) ? x : y>z ? y : z;
}
int main(){
	cout<<great<int>(1,2,3)<<endl;
}
