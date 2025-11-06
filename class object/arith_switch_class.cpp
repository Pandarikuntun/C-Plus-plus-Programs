//arithmetic calculation using switch case
#include<iostream>
using namespace std;
class arithmatic{
	public: int x,y,z,mode;
	void sw(){
	
	cout<<"enter the x y value: ";
	cin>>x>>y;
	cout<<"enter \n1 add\n2  sub\n3 mul\n4 div"<<endl;
	cin>>mode;
	switch(mode){
		
		case 1:
			cout<<"sum "<<x+y;
			break;
		case 2:
			cout<<"sub "<<x-y;
			break;
		case 3:
			cout<<"mul "<<x*y;
			break;
		case 4:
			cout<<"div "<<x/y;
			break;
	}
}
	
};
int main(){
	arithmatic obj;
	obj.sw();
	return 0;
}
