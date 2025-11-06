#include<iostream>
using namespace std;
class name{
	public:name(){
		cout<<"constructor calling"<<endl;
	}
	~name(){
		cout<<"destructor calling"<<endl;
	}
};
int main(){
	name obj;
	name *ptr=new name;
	delete ptr;
}
