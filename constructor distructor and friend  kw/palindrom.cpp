#include<iostream>
using namespace std;
class ram{
	int x;
	public: ram1(){	//constructor
		x=121;
	}
	ram(){
		int r, s=0, temp=x;
		while(x!=0)
		{
			r=r%10;
			s=s*10+r;
			x/=10;
		}
		x=temp;
		if(x==s)
		cout<<"palindrom"<<endl;
		else
		cout<<"palindrom"<<endl;	
				
	}
};
int main(){
	ram obj;
}
