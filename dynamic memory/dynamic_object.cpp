#include<iostream>
using namespace std;
class name{
	int x,y;
	public:name(){			//defalt constructor
		x=10;y=20;
	}
	name(int a,int b){		//paramitarised constructor
		x=a;y=b;
	}
	void sum(){
		cout<<x+y<<endl;
	}
	~name(){
		cout<<"distructor is calling"<<endl;
	}
};
int main(){
	name obj;				//defalt constructor obj
	name obj1(1,2);			//paramitarised constructor obj
	name *p=new name;				//dynamic memory creating using ptr
	name *q=new name(1,2);			//dynamic memory creating using ptr
	obj.sum();	obj1.sum();			//static memory obj function calling
	p->sum();	q->sum();			//dynamic memory ptr_var function calling
	delete p;	delete q;			//deleting the dynamic memory
}
