/*
Write a C++ program that takes a student’s marks as input and:
If marks = 90 ? print "Grade A"
If marks = 75 and < 90 ? print "Grade B"
If marks = 50 and < 75 ? print "Grade C"
Otherwise ? print "Fail"
*/
#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"enter the student marks :";
	cin>>marks;
	if(marks>=90)
	cout<<"Garde A"<<endl;
	else if(marks>=75 && marks<90)
	cout<<"Grade B"<<endl;
	else if(marks>=50 && marks<75)
	cout<<"Grade C"<<endl;
	else
	cout<<"Fail"<<endl;
	return 0;
}
