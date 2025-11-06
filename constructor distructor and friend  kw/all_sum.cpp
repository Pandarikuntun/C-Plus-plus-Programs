/*creat sum mf inside class
creat sub mf outside class
cterat one defalt constructor & one parameterized constructor 
call parameterized constructor II
*/
#include<iostream>
using namespace std;
class all{			//data members
	int x;
	int y;
	public: all(){			//defalt constructor
		x=10;
		y=20;
	}
	all(int a,int b){		//parametaraized constr
		x=a;
		y=b;
	}
	void sum()       	 	  //sum member function 
	{				
		cout<<"sum using inside class function : "<<x+y<<endl;
	}	
	void sub();				//sub function declaration
};
void all::sub()				//sub out member function
{
	cout<<"sum using outside class function : "<<x-y<<endl;
}
int main(){
	all obj1;			//memory created when ojb1 is created
	int a,b;
	obj1.sum();			//calling
	obj1.sub();			//calling
	cout<<"parameterized execution "<<endl;
	cout<<"enter two values :";
	cin>>a>>b;
	all obj2(a,b);		//two values are assigned to obj2
	obj2.sum();			//calling
	obj2.sub();			//calling
	return 0;
}
