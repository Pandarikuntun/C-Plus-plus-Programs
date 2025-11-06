//assending of string
#include <iostream>
using namespace std;

int main(){
    char name[100],temp;
    int i,j,l=0;
    cin>>name;
    cout<<"original: "<<name<< endl;
    for(i=0;name[i]!='\0';i++){
        l++;
    }
    for(i=0;i<l-1;i++){
        for(j=i+1;j<l;j++){
            if(name[i]>name[j]){
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }
    }
    cout<<"orderd: "<<name<<endl;
    return 0;
}

