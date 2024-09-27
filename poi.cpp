#include<iostream>
using namespace std;
int main()
{	
	int i=5;
	int *p;
    p=&i;
    *p=10;
    cout<<*p;
	//cout<<i;
}
