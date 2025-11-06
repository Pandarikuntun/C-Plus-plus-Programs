#include<iostream>
int main(){
	int i,n;
	float *p ,sum=0;
	std::cout<<"enter the no of float vales "<<std::endl;
	std::cin>>n;
	p=new float[n];
	if(n==NULL){
		std::cout<<"memory is not alloacated "<<std::endl;
	}
	else
	std::cout<<"memory is allocated"<<std::endl;
	std::cout<<"enter the float values"<<std::endl;
	for(i=0;i<=n;i++){
		std::cin>>*(p+i);
		sum+=*(p+i);
	}
	std::cout<<"sum "<<sum<<std::endl;
	delete p;
	return 0;
}
