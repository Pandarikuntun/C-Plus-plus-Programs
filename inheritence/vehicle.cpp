/*Write a C++ program where a base class Vehicle has attributes like brand and model, 
and a derived class Car adds seating capacity. Display all details using inheritance.*/
#include<iostream>
using namespace std;
class vehicle{
	protected:string brand;
	protected:string model;
	public:vehicle(string a,string b){
		brand=a;
		model=b;
	}
	~vehicle(){
		cout<<"distructor calling"<<endl;
	}
};
class car :public vehicle{
	protected: int cap;
	public:car(string a,string b,int c):vehicle(a,b){
		cap=c;
	}
	void disp(){
		cout<<"brand = "<<brand<<endl;
		cout<<"model = "<<model<<endl;
		cout<<"capacity seating = "<<cap<<endl;
	}
	~car(){
		cout<<"distructor calling"<<endl;
	}
};
int main(){
	string brand,model;
	int cap;
	cout<<"enter the brand model capacity "<<endl;
	cin>>brand>>model>>cap;
	car obj(brand,model,cap);
	obj.disp();
	return 0;
}
