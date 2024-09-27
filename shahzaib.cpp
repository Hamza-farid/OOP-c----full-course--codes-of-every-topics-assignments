
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	bool status_of_email=false;int flag=0,flagfirst=0;
	while(!status_of_email)
	{
		try
		{
			char x[50],y,z;int j;
			cout<<"PLEASE ENTER YOUR EMAIL ID : ";cin>>x;
			j=strlen(x)
			;for(int a=0;a<j;a++)
			{
				y=x[a];
				if(y=='@')
				{
					flagfirst=1;
				}
				
				if(y=='_')
				{
					flag=1;
				}
				
				if(!(y=='_'))
				{
					flag=0;
				}
			}
			if(flagfirst==1&&flag==0)
			{
				status_of_email=true;
			}
			if(flagfirst==0) throw 0;
			if(flag==1) throw "_ is not allowed\n";
			
		}
		catch(const char *l)
		{
			cout<<l;
		}
		catch(int i)
		{
			cout<<"you did not type @ in ID please enter again\n";
		}
	}
	if(status_of_email=true)
	{
		cout<<"your EMAIL ADDRESS have no mistakes , it is valid";
	}
}

