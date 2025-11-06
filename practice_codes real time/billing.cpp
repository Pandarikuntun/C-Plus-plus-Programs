/* Write a C++ program that:
Asks the user for the price of an item and the quantity purchased.
Calculates the total bill.
If the total bill is greater than 1000, apply a 10% discount.
Print the final amount to be paid.
*/
#include<iostream>
using namespace std;
void bill(int item,int quantity){
	int discount,sum;
	sum=quantity*item;
	if(sum>1000){
		discount=(sum/100)*10;
		discount=sum-discount;
		cout<<"bill amount is "<<sum<<endl;
		cout<<"your gained 10% discount remaing amount to pay "<<discount<<endl;
	}
	else
	cout<<"your bill amount is "<<sum<<endl;
}
int main(){
	int item,quantity;
	cout<<"enter the price of item :";
	cin>>item;
	cout<<"enter the quantity item :";
	cin>>quantity;
	bill(item,quantity);
	return 0;
}
