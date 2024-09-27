#include<iostream>
using namespace std;
class student{
	int id,rolno;
	public:
		student(int x,int y){
			id=x;rolno=y;
		}
		student(){
		}
		bool operator==(student &t){
			student temp;
			if(id==t.id&&rolno==t.rolno)
			{
				return true;
			}
			else
			    return false;
		}
};
int main(){
	
	student a1(10,10),a2(10,10);
	
	if(a1==a2){
		cout<<"equal";
	}
	else
	cout<<"not equal";
}
