#include <iostream> 
using namespace std; 
class Add
{ 
   int x, y; 
    public:
        Add(){x=5;y=17;}
   virtual void display()=0;  //overridden function
}; 
class Substract: public Add
{ 
    int y,z; 
    public:
        Substract(){y = 10;z=30;} 
   void display()  //overridden function
    { 
        cout << "Value of y is : " <<y<<" "<<z<<" "<<y-z<<endl; 
    } 
};
class Multiply: public Add{
      int x, y;
      public:
      Multiply(){ x=4; y=10;} 
	    void display(){
            cout<<" Value of multiplication is: "<<x*y; }
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

///// You are also suppose to write classes w.r.t. the following code
//int main (){
//        Emp *p;
//        Teacher t1("abcd ", 150000), t2("xyz");
//        Admin  a1("aaaaa", 45000), a2("bbbbb");
//        Display total of the salaries of the all the above four emplyees.
//}
