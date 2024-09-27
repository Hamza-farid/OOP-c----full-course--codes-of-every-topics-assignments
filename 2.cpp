#include<iostream>
using namespace std;
class shape{
	protected:
	int l,w;
	public:
		virtual int area()=0;
};
class rect:public shape
{
	public:
	rect()
	{
		l=6;w=6;
	}
	int area()
	{
		return l*w;
	}
};
class tri:public shape
{
	public
	:tri()
	{
		l=6;w=600;
	}
	
	int area()
	{
		return (l*w)/2;
	}
};
int main()
{
	shape *ptr;rect r;tri t;
	ptr=&r;
	int c=ptr->area();
    ptr=&t;
    int d=ptr->area();
    if(c>d)
    {
    	cout<<"rectangle area is great"<<c;
	}else
	cout<<"triangle area is great"<<d;	
}
