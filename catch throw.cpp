#include<iostream>
using namespace std;
int main()
{
	try
	{
		int x,y; char z;
		cout<<"enter the first number";
		cin>>x;
		cout<<"enter the operator";
		cin>>z;
		if(z=='=') throw 0;
		cout<<"enter the second number";
		cin>>y;
		if(z=='+')
		{
			cout<<x+y;
		}
			if(z=='-')
		{
			cout<<x-y;
		}
			if(z=='*')
		{
			cout<<x*y;
		}
		if(z=='/'){
			if(y==0)throw z;
			cout<<x/y;
		}
	}
	catch(int v)
	{
		cout<<"invalid operator";
	}
	
	catch(char v)
	{
		cout<<"cannot be zero";
	}
	
	
}
