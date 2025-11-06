//string length without using strln()
#include<iostream>
using namespace std;
int main(){
	string name;
	cin>>name;
	int i;
	int length=0;
	for(i=0;name[i]!='\0';i++){
		length++;
	}
	cout<<"length is "<<length<<endl;
	return 0;
}
