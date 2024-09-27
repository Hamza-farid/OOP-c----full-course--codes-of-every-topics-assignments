//highest no. of array
#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3,44,5};
	int a=arr[0];
	for(int i=0;i<5;i++){
		if(arr[i]>a){
			a=arr[i];// transfering higher value founded
		}
	}
	cout<<"highest : "<<a;
	
	
}
// finding smallest no. of array
/*
#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3,44,5};
	int a=2;
	for(int i=0;i<5;i++){
		if(arr[i]<a){
			a=arr[i];
		}
	}
	cout<<"smallest"<<a;
	
	
}*/
