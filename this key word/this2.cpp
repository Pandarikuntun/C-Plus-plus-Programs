#include <iostream>
using namespace std;
class name
{
    int x,y;
    public: void dis(int x,int y)
    {
        (*this).x=x;
        this->y=y;
        cout<<this<<endl;
        cout<<this->x<<endl;
          cout<<this->y<<endl;
    }
};


int main()
{
name obj,obj1;
obj1.dis(5,90);
obj.dis(5,90);

    return 0;
}
