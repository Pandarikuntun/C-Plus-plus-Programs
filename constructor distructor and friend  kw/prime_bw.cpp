#include<iostream>
using namespace std;
class name{
	public:	int x,y;
	name(){
		x=20;
		y=40;
	}
	name(int a,int b){
		x=a;
		y=b;
	}
	void prime()
	{
		int i,j,count=0;
		for(i=x;i<=y;i++){
			for(j=1;j<=i;j++){
				if(i%j==0)
				count++;
			}
			if(count==2)
			cout<<i<<" ";
			count=0;	
		}
	}	
};
int main(){
	name obj1,obj2;
	//cout<<obj1.x<<" "<<obj1.y<<endl;
	obj1.prime();
	//obj2.prime(10,20);
	return 0;
}
