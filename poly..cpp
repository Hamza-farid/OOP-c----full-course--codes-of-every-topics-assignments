#include<iostream>
using namespace std;
class shape
{	
protected:
     float l,w;
	public:
		virtual float area()=0;//pure virtual function
};
class circle:public shape
{
float r;
public:
circle()
{
	r=9;
}	
float area()
{
return 3.14*r*r;	
}
};
class rect:public shape
{

	public:
	rect()
	{
	l=1;w=0;
	}
	
float area()
{
return l*w;	
}
};
class tri:public shape
{
	
	public:
	tri()
	{
	l=0;w=0;
	}
	
float area()
{
return (l*w)/2;	
}
};

int main()
{
	shape *pointer;
	tri t;
	pointer=&t;
	cout<<pointer->area();
}
