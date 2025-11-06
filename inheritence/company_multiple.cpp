/*Design a C++ program where:
A base class Employee stores attributes such as name and employeeID.
A derived class Manager (from Employee) introduces the attribute department.
A further derived class Director (from Manager) adds an attribute companyStrategy.
The program should demonstrate multilevel inheritance by displaying complete information for a Director.*/
#include<iostream>
using namespace std;
class employee{
	public:string name;
	int id;
	public:employee(){
		name="ram";
		id=123456;
	}
		~employee(){
		cout<<"distructor calling e"<<endl;
	}
};
class manager:public employee{
	public:string department;
	public:manager(){
		department="qc";
		
	}
		~manager(){
		cout<<"distructor calling m"<<endl;
	}
};
class director:public manager{
	string companystg;
	public:director(){
		companystg="good";
	}
	void disp(){
		cout<<"name :"<<name<<endl;
		cout<<"id :"<<id<<endl;
		cout<<"department :"<<department<<endl;
		cout<<"company statagy :"<<companystg<<endl;
	}
	~director(){
		cout<<"distructor calling d"<<endl;
	}
};
int main(){
	director obj;
	obj.disp();
	return 0;
}
