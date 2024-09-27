#include<iostream>
using namespace std;
int main()
{
	int x;
	char k;
	try
	{
	    cout<<"enter the number ";cin>>x;
		if(x>=0&&x<=9) throw 0;
		if(x>9) throw l;
    }
     catch(int x)
	 {	
     	cout<<"it is single digit";
	 }     	
	 catch(char b)
	 {
	 	cout<<"it is not a single digit number";
	 }
	 //catch(...)
	 //{
	 //	cout<<"ok";
	 //}
}
