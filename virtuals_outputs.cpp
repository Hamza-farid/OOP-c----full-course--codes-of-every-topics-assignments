#include <iostream> 
using namespace std; 
class Add
{ 
   int x, y; 
    public:
        Add(){x=5;y=17;}

   virtual void display(){
   }
     //overridden function

}; 
class Substract: public Add
{ 
    int y,z; 
    public:
        Substract(){y = 10;z=30;
        } 
   virtual void display()  //overridden function
    { 
        cout << "Value of y is : " <<y<<" "<<z<<" "<<y-z<<endl; 
    } 
};
class Multiply: public Add{
        int x, y;

        public:
                        Multiply(){ x=4; y=10;
        }
           virtual     void display(){
                        cout<<" Value of multiplication is: "<<x*y;
                }
};
int main() 
{ 
    Add *m;           //base class pointer .it can only access the base class members
    Substract s;     // making object of derived class
    Multiply obj;
    m = &s; 
   m->display();      // Accessing the function by using base class  pointer
   m=&obj;
   m->display();
    return 0; 
} 
