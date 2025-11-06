/*1. Hospital Management System (C++)
Description:
Create a program to manage patients in a hospital. Each patient has:
"	Patient ID, Name, Age, Disease.
"	Ability to admit a new patient.
"	Search for a patient by ID.
"	Display all admitted patients.
 Real-time usage: Used in hospital software to keep patient records and track admitted patients.
*/
#include<iostream>
using namespace std;
class hospital{
	private:int id;
	public:string name;
	private:int  age;
	public:string diseage;
	protected: int capacity;
	public:hospital(int a,string b,int c, string d,int e=1000){
		id=a;
		name=b;
		age=c;
		diseage=d;
		capacity=e;
	}
	void new_patient(){
		cout<< "Enter the patient name :"<<endl;
		cin>>name;
		cout<< "Give the unique id :"<<endl;
		cin>>id;
		cout<<"Enter the patient age :"<<endl;
		cin>>age;
		cout<< "Enter the deseage name patient suffering :"<<endl;
		cin>>diseage;
		capacity--;
		cout<<"patient admited sucessfully\n----------"<<endl;

	}
	void patient_id(){
		int searchid;
		cout<<"Enter patient id :"<<endl;
		cin>>searchid;
		if(id==searchid){
			cout<<"Patient name :"<<name<<endl;
			cout<<"Patient id :"<<id<<endl;
			cout<<"Patint desease: "<<diseage<<endl;
		}
		else{
			cout<<"!! Id does not exist\n---------- "<<endl;
		}
	}
	
	
	void patient_name(){
		string searchname;
		cout<<"Enter patient name"<<endl;
		cin>>searchname;
		if(name==searchname){
			cout<<"Patient name :"<<name<<endl;
			cout<<"Patient id :"<<id<<endl;
			cout<<"Patint desease: "<<diseage<<endl;
		}
		else{
			cout<<"!! Patient is not admited in this hospital\n---------- "<<endl;
		}		
	}
	
	
	void patient_vacancy(){
		if(capacity>0)
		cout<<"Avalable beds are :"<<capacity<<endl;
		else
		cout<<"Beds are not available"<<endl;
	}
	
	
	void patient_discharge(){
		cout<<" Discharged"<<endl;
		capacity++;	
	}
	
	
	void patent_details(){
		cout<<"TULASIRAM HOSPITAL Patient Details\n-----------------------"<<endl;
		cout<<"Patient Id\tName\tAge\tDeseage"<<endl;
		cout<<id<<"\t\t"<<name<<"\t"<<age<<"\t"<<diseage<<endl;
	}
};
int main(){
	int choice,count=0,a,c,e;
	string b,d;
	hospital patient(a,b,c,d,e=1000);		//obj created
	do{
		cout<< "----------\n1.Admit a new patient"<<endl;
		cout<< "2.Search for pasent id" <<endl;
		cout<< "3.Search for pasent with name" <<endl;
		cout<< "4.display the admited patients details"<<endl;
		cout<< "5.Discharge details"<<endl;
		cout<< "6.Hospital vacancy beds details"<<endl;
		cout<< "---Enter code.exit---"<<endl;
		cin>>choice;
		cout<<"-------------------------"<<endl;
		switch(choice){
			case 1:
				patient.new_patient();
				break;
			case 2:
				patient.patient_id();
				break;
			case 3:
				patient.patient_name();
				break;
			case 4:
				patient.patent_details();
				break;
			case 5:
				patient.patient_discharge();
				break;
			case 6:
				patient.patient_vacancy();
				break;
			case 1670:
				cout<<"---Management server is closed sucessfully---"<<endl;
				break;
			}
		}while(choice !=1670);
		return 0;
	}
