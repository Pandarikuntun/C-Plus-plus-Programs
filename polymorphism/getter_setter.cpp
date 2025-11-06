#include <iostream>
using namespace std;
class Person {
private:
    int age;

public:
  
    void setAge(int newAge) {
 
        if (newAge >= 0) {
            age = newAge;
        } else {
            std::cout << "Error: Age cannot be negative!" << std::endl;
        }
    }


    int getAge() const {
        return age;
    }
};

int main() {
    Person person;
    
    person.setAge(30);
    
    std::cout << "The person's age is: " << person.getAge() << std::endl;
    person.setAge(-5);
    
    return 0;
}
