//reverse of string
#include<iostream>
using namespace std;
void rev(char word[50]){
	int i,l=0,temp;
	for(i=0;word[i];i++)
	l++;
	for(i=0;i<l/2;i++){
		temp=word[i];
		word[i]=word[l-i-1];
		word[l-i-1]=temp;
	}
	cout<<"reverse word :"<<word<<endl;
}
int main(){
	char word[50];
	cout<<"enter a string or name :"<<endl;
	cin>>word;
	rev(word);
}
