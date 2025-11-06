//arithmetic operation using the switch in dynamic memory allacation [DMA] 
#include<iostream>
using namespace std;
int main(){
	int *a=new int;
	int *b=new int;
	cout<<"enter the two variables :"<<endl;
	cin>>*a>>*b;
	cout<<"operation symbol:"<<endl;
	char *c=new char;
	cin>>*c;
	switch(*c){
		case '+':
		cout<<"sum ="<<*a+*b<<endl;
		break;
	case '-':
		cout<<"sub ="<<*a-*b<<endl;
		break;
	case '*':
		cout<<"product ="<<(*a)*(*b)<<endl;
		break;
	case '/':
		if(*b==0)
		cout<<"undefined"<<endl;
		else
		cout<<"quesent ="<<(*a)/(*b)<<endl;
		break;
}
delete a,b,c;
}
