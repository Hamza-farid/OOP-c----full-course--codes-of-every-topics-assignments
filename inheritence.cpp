#include <iostream>
using namespace std;

class Person{
        string name;
        public:
            Person(){ cout<<"Defa Constructor of Person class\n";
             }
                Person(string name)
                        { cout<<"1 param Constructor of Person class\n";
                //  this->name=name;
                }
};

class Student:public Person {
        float cgpa;
        public:
                Student():Person("xyz"){  cout<<"Defa Constructor of Student class\n";
                }
                Student(float c): Person("abc")
                {cgpa=c; cout<<"1 param Constructor of Student class\n";
                }
};
int main (){
        Student s1();
  //  Student p1;
        return 0;
}

