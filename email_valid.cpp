#include<iostream>//M.HAMZA FARID      3-B     70128112
#include<string.h>    // bcuz using strlen()
using namespace std;//condition 1,2 as my id is 70128112 even
int main()
{
	bool testing=false;
	while(!testing)
	{
		try
		{
			char a[20],b,c,d;
        	int x,z,l;
	        int flagat=0;
	        int flagdot=0;
	        cout<<"enter email address: ";
	        cin>>a;
	        x=strlen(a);
	        for(int i=0;i<x;i++)
	        {
		        b=a[i];
		        if(b=='@')
		        {
    	          flagat=1;c=i;
                }
		        if(b=='.')
		        {
		          flagdot=1;d=i;
	            }
	        }
            if(flagat==1&&flagdot==1&&c<d)
            { 
               testing=true;
            }
            if(flagat==0) throw 0;
            if(flagdot==0) throw b;
            if(d<c) throw ". cannot come before @\n";
        }
       catch(int i)
        {
        	cout<<"@ is not present\n";
		}
	catch( char  c)
        {
        	cout<<". is not present\n";
		}
	catch(const char*st)
	{
			cout<<st;
	}
	}
    if(testing=true)
   {
	    cout<<"valid";
   }	
}
