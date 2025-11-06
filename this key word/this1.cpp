#include <iostream>
using namespace std;
class name
{
    int x;
    public: void dis()
    {
        x=10;
        cout<<this<<endl;
        cout<<this->x<<endl;
    }
};


int main()
{
name obj;
obj.dis();

    return 0;
}
