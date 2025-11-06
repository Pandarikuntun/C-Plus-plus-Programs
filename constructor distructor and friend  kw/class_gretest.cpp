// class key word 
#include<iostream>
using namespace std;
class Name {
private:
    int x;
protected:
    int y;
public:
    Name() {
        x = 10;
        y = 20;
    }
    Name(int a, int b) {
        x = a;
        y = b;
    }
    void sum() {
        cout << x + y << endl;
    }

    friend void greatest(int, Name);
	~Name(){
    	cout<<"destroctor callig"<<endl;
	}
};

void greatest(int a, Name obj) {
    (a < obj.x) ? cout << a : cout << obj.x;
    cout << endl;
}

int main() {
    Name obj1, obj2(100, 50);
    greatest(20, obj1);
    greatest(30, obj2);
    return 0;
}

