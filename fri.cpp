#include<iostream>
using namespace std;
class a{
	string name;
	public:
		friend void show(a); 
};
void show(a t){
	t.name="ali";
cout<<name;
}
int main(){
	a obj;
	show(obj);
}



