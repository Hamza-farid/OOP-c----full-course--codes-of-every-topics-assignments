#include<iostream>
using namespace std;
class abc{
	int h,m;
	public:
		abc(int a,int b)
		{
			h=a;
			m=b;
		}
		abc(){
			h=m=0;
		}
		void display(){
			cout<<h<<endl<<m;
		}
		
abc operator+(abc t)
{
	abc c;
	c.h=h+t.h;
	c.m=m+t.m;
	return c;
}
};
int main(){
	abc a1(8,77),a2(66,6);
	abc a3;
	a3=a1+a2;
	a3.display();
}
