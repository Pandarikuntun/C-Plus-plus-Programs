#include<iostream>
int main(){
	int i,size;
	std::cin>>size;
	int* p=new int[size];
	for(i=0;i<size;i++){
		p[i]=i*4;
	}
	std::cout<<"array is "<<std::endl;
	for(i=0;i<size;i++){
		std::cout<<p[i]<<" ";
	}
	return 0;
}
