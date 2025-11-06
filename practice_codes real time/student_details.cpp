/* Create a C++ program with a Student class that stores:
Name, Roll Number, and Marks.
A function to input student details.
A function to display student details. */
#include<iostream>
//#include<sting.h>
using namespace std;
class student{
	string name;
	int roll;
	float marks;
	public:void read(){
		cout<<"Enter the name :"<<endl;
		cin>>name;
		cout<<"Enter the roll :"<<endl;
		cin>>roll;
		cout<<"Enter the marks :"<<endl;
		cin>>marks;
	}
	void disp(){
		cout<<"Name :"<<name<<endl;
		cout<<"Roll number :"<<roll<<endl;
		cout<<"Marks :"<<marks<<endl;
	}
};
int main(){
	student obj;
	obj.read();
	obj.disp();
}
