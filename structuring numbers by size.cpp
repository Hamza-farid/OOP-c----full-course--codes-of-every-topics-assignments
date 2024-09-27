#include<iostream>
using namespace std;
int main()
{
	int b[5]={1,2,3,4,5};
	int temp;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j+1];
				b[j+1]=b[j];
				b[j]=temp;
			}
		}
	}
	cout<<"sorted";
	for(int l=4;l=0;l--)
    {
	
		cout<<b[l];
    }
}
