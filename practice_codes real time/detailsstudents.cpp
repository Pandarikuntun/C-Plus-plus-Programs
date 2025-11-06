/* Write a C++ program that takes the name, age, and CGPA of a 
student as input and then displays them in a formatted way.*/
#include<iostream>
using namespace std;
int main(){
	char name[20];
	int age;
	float cgpa;
	cout<<"enter the name and age and cgpa";
	cin>>name>>age>>cgpa;
	cout<<"name "<<name<<endl;
	cout<<"age "<<age<<endl;
	cout<<"cgpa "<<cgpa<<endl;
}

