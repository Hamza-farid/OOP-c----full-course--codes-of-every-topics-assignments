#include<iostream>
using namespace std;
class b{
	protected:
	char name[33];
	public:
		virtual char display()=0;
};
class a:public b{
	
	public:
		a()
		{
			cout<<"enter name :";cin>>name;
		}
		char  display(){
	    return name;
		}
};
int main()
{
	b *b1;
	a a1;
	b1=&a1;
    b1->display();
}
