#include<iostream>
using namespace std;
int main(){
	int num;
	bool check;
	cout<<"enter : ";cin>>num;
	for(int i=2;i<num;i++){
		if(num%i==0){
			check=false;
			break;
		}
		else  {
			check=true;
		}
	}
	if(check==false)
	{
		cout<<"not a prime number";
	}
	else if(check==true){ 
		cout<<" is  prime number";
	}
}
