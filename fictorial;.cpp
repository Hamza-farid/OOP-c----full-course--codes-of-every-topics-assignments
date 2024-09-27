#include<iostream>
using namespace std;
int main()
{
	int num,sum=1;
	//long sum = 1.0;
	cout<<"enter num";
	cin>>num;
	for(int i=1;i<=num;++i)
	{
		sum*=i;
	}
	cout<<num<<" "<<sum;
}
