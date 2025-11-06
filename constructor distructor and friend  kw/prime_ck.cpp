//prime number checking
/*using defalt constructor and parameterized constructor 
member function inside class for defalt constructor
member function outside class for parameterized constructor*/
#include<iostream>
using namespace std;
class number{
	int x;
	public:number(){
		x=5;
	}
	number(int a){
		x=a;
	}
	void prime(){
		int i,count=0;
		for(i=1;i<=x;i++){
			if(x%i==0)
			count++;
		}
		if(count==2)
		cout<<x<<" prime"<<endl;
		else
		cout<<x<<" not prime"<<endl;
	}
	void prime1();
};
void number :: prime1(){
	int i,count=0;
	for(i=1;i<=x;i++){
		if(x%i==0)
		count++;
	}
	if(count==2)
	cout<<x<<" is prime"<<endl;
	else
	cout<<x<<" not prime"<<endl;
}
int main(){
	number obj1;
	obj1.prime();
	int a;
	cout<<"enter the number :"<<endl;
	cin>>a;
	number obj2(a);
	obj2.prime1();
	return 0;
}
