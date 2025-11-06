/* 3. Railway Reservation System (C++)
Description:
Create a program for booking train tickets:
	Store Passenger Name, Age, Train Number, Seat Number.
	Book a ticket.
	Cancel a ticket.
	Show all booked tickets.
 Real-time usage: Similar to IRCTC railway booking system*/
#include<iostream>
//#include<library>
using namespace std;
 class booking_system{
 	private:string name;
 	private:int age;
 	private:int trainno;
 	private:string seatno;
 public:booking_system(string n, int a, int tno, string sno) {
        name = n;
        age = a;
        trainno = tno;
        seatno = sno;
    }
    

	 void booking(){
	 	string gender;
	 	cout<<"Enter gender(male or female)"<<endl;
	 	cin>>gender;
	 	cout<<"Enter name :"<<endl;
	 	cin>>name;
	 	cout<<"enter age"<<endl;
	 	cin>>age;
	 	cout<<"train number :"<<endl;
	 	cin>>trainno;
	 	cout<<"seat number :"<<endl;
	 	cin>>seatno;
	 	cout<<"booking is sucessful"<<endl;
	 }
	 
	 
	 void cancle(){
	 	cout<<"train number"<<endl;
	 	cin>>trainno;
	 	cout<<"Enter seatno"<<endl;
	 	cin>>seatno;
	 	cout<<"Bokking is cancil"<<endl;
	 }
	 void chartsheet(){
	 	cout<<"---pasengers sheet---"<<endl;
	 	cout<<"Pasenger Name\tSeat Number"<<endl;
	 	cout<<name<<"\t"<<seatno<<endl;
	 	
	 }
	 
	 void available(string from,string to){
	 	int n;
	 	 	cout<<"From"<<endl;
		 	cin>>from;
		 	cout<<"To"<<endl;
		 	cin>>to;
		 	cout<<from<<"\t"<<to<<endl;
		 	cout<<"1.venkatadri express"<<endl;
		 	cout<<"2.bagyalatha express"<<endl;
		 	cout<<"3.bahubali express"<<endl;
		 	cout<<"4.chennai super express"<<endl;
		 	cout<<"any kye.vandhe bharath"<<endl;
	 	cin>>n;
	 	if(n==1)
		 cout<<"venkatadri express"<<endl;
		else if(n==2)
		 cout<<"bagyalatha express"<<endl;
		else if(n==3)
		 cout<<"bahubali express"<<endl;
		else if(n==4)
		 cout<<"chennai super express"<<endl;
		else
		 cout<<"vandhe bharath"<<endl;
	 }
 };
 int main(){
 	
 	string a,d,from,to;
 	int b,c,choice;
 	cout<<"welcome Paradise Journey"<<endl;
 	cout<<"1 for booking"<<endl;
 	cout<<"2 for cancling"<<endl;
 	cout<<"3 for chartsheet"<<endl;
 	booking_system train(a,b,c,d);		//obj ctrating
 	cin>>choice;
 	switch(choice){
 		case 1:
 			train.available(from,to);		//available train function
 			train.booking();
 		break;
 		case 2:
 			train.cancle();
 		break;
 		case 3:
 			train.chartsheet();
 		break;
	 }
	 
 	return 0;
 }

