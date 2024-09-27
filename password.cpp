#include <iostream>
using namespace std;

int main()
{
    bool done = false;
    string email;
    while (!done)
	{
        try {
        	cout<<"enter email : ";
        	cin>>email;
        	for(int i=0;i<email.length();i++)
        	{
        		if(email[i]=='@')
        		{
					done = true;
			    }
			    
            }
             if(!(email.length()=='@') )throw 0;
            if(done=true)
            {
            	cout<<"valid";
			}
        } 
    catch(int x)
         {
            cout<<"@ is missing \n";	
         }
	}
}
