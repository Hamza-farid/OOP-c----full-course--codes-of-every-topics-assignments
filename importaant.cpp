//#include<iostream>
//#include<fstream>
//using namespace std;
//class Student {
//int i; float cgpa;
//public: Student (int id){i=id; cout<<"Enter cgpa for student ID: "<<i<< endl;
//        cin >> cgpa;
//}
//Student(){
//}       
//};
//int main() {
//
//        ofstream fout("student.dat",ios::binary);
//        for (int i=1;i<=10;i++)
//        {
//        // creat an object with i then write that object to file
//        Student s1(i);
//                fout.write((char*)&(s1),sizeof(Student));
//        }
//        fout.close();
//        return 0;
//}
//
//// Reading a file

#include<iostream>
#include<fstream>
using namespace std;
class Student {
int i; float cgpa;
public:
//Student (int id){i=id; cout<<"Enter cgpa for student ID: "<<i<< endl;
//      cin >> cgpa;
//}
Student(){
}
int getID(){ return i;
}       
float getCGPA(){ return cgpa;
}
};
int main() {
        Student s;
        float a=3.0;
        ifstream fout("student.dat",ios::binary);
        for (int i=1;i<=10;i++)
        {
        // creat an object with i then write that object to file
                fout.read((char*)&(s),sizeof(Student));
                //cout <<"Student ID "<<s.getID()<<" with CGPA"<<s.getCGPA()<<endl;
                if(a<s.getCGPA())
                {
                	cout <<"Student ID "<<s.getID()<<" with CGPA"<<s.getCGPA()<<endl;
				}
        }
        fout.close();
        return 0;
}


