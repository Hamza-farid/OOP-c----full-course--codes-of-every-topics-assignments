#include<iostream>
#include<fstream>
using namespace std;
class Student {
int i; float cgpa;
public: Student (int id, float c){i=id;cgpa=c;
}       
};
int main() {
        Student s1(1,3.4), s2(2,3.9);
        ofstream fout("student.dat",ios::binary);
        for (int i=0;i<2;i++)
		
        fout.write((char*)&(s1),sizeof(Student));
                fout.write((char*)&(s2),sizeof(Student));
        fout.close();
        return 0;
}

