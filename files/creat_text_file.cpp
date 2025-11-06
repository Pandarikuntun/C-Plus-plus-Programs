//creat a file 
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char name[500]="ramul2";
	ofstream obj("ram.text");
	obj<<name;
	obj.close();
	ifstream obj1("ram.text");
	char b[500];
	obj1>>b;
	cout<<b;
	return 0;
}
