#include<iostream>
using namespace std ;

int main()
{
    int age;
    cout<<"enter age";
    cin>>age;
   try {
  
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } /*else {
   cout<<"gh";
  }*/
  else 
  throw 0;
} 
catch (...) {
  cout << "Access denied - You must be at least 18 years old.\n";
  cout << "Age is: ";
}

return 0;
}
