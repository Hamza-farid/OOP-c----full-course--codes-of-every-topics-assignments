#include<iostream>
using namespace std;
class student{
	int id;string name;
	public:
		student(int i,string x){
			id=i;name=x;
		}
		student(student &obj){
			id=obj.id;
			name=obj.name;
		}
		void display(){
			cout<<id<<endl<<name<<endl;
		}
};
int main(){
	student s1(7012,"hamza");
	student s2=s1;
	s1.display();
	s2.display();
}