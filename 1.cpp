#include<iostream>
using namespace std;
class base{
	public:
		virtual void print()=0;
		virtual void display()=0;
};
class derive : public base{
	public:
		void print(){
			cout<<"oop\n";
		}
		void display()
		{
			cout<<"3-b";
		}
};
int main()
{
	base *ptr;
	derive d;
	ptr=&d;
	
	ptr->print();
	ptr->display();
}
