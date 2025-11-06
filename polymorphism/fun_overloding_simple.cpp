
//function over loding 
#include<iostream>
using namespace std;
int sum(int a,int b){
	return a+b;
}
int sum(int a,int b,int c){
	return a+b+c;
}
float sum(float a,int b){
	return a+b;
}
float sum(int a,float b){
	return a+b;
}
float sum(float a,int b,float c){
	return a+b+c;
}
int main(){
	cout<<"sum ="<<sum(1,2)<<endl;
	cout<<"sum ="<<sum(1,2,3)<<endl;
	cout<<"sum ="<<sum(2.3f,1)<<endl;
	cout<<"sum ="<<sum(9,1.2f)<<endl;
	cout<<"sum ="<<sum(2.3f,5,1.2f)<<endl;
}
