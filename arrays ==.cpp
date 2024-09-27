#include<iostream>
using namespace std;
int main()
{
	int b[5];
	int c[5];
	for(int i=0;i<5;i++){
		cin>>b[i];
        c[i]=b[i];	
	}
	
	for(int i=0;i<5;i++){
		cout<<c[i];
	}
}
