#include <iostream>
using namespace std;
class base{
    public:
     int var_base=9;
     virtual void display(){
        cout<<"the value of base class variable is:"<<
        var_base<<endl;
     }
};
class derived: public base{
    public:
      int var_derived=20;
      void display(){
         cout<<"the value of dervied class variable is: "<<
         var_derived<<endl;
      }
};
int main() {
      base* b;
      derived d;
      b=&d;
      b->display();
    
    return 0;
}