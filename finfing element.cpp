//how many times element occured in array
#include<iostream>
using namespace std;
int main()
{
	int a;int counter=0;
	int arr[5]={3,3,5,6,7};
	cout<<"enter element u wanna find";
	cin>>a;
	for(int i=0;i<5;i++){
		if(arr[i]==a){
			counter++;
		}
	}
	cout<<"it occured "<<counter<<" times";
}
