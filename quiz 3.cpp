#include<iostream>
using namespace std;
class shape
{
	protected :
	 int r;
	public:
		virtual int area()=0;
};
class circle:public shape{
	public:
	circle(int x){
		r=x;
	}
	int area(){
	return 3.14*r*r;	
	}
};

class ground:public shape{
	public:
	ground(int x){
		r=x;
	}
	int area(){
	return 3.14*r*r;	
	}
};
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,11};
	shape *ptr[10];int total=0;
	for(int i=0;i<5;i++)
	{
		ptr[i]= new circle(arr[i]);
	}
	cout<<endl;
	for(int i=5;i<10;i++)
	{
		ptr[i]=new ground(arr[i]);
	}
	for(int i=0;i<10;i++)
	{
		total+=ptr[i] -> area();
	}
		cout<<"total is : "<<total<<endl;
		cout<<"avg is : "<<total/10;
			
}
