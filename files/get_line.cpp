#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char name[100];
	char a[100];
	cout<<"enter the the string :";
	cin.getline(name,100);
	ofstream obj("ram.text");
	obj<<name;
	obj.close();
	ifstream obj1("ram.text");
	obj1.getline(a,100);
	cout<<a;
	obj1.close();
	return 0;
}
