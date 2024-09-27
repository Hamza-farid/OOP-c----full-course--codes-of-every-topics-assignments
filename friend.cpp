#include<iostream>
using namespace std;
class teacher{
	string name;
	public:
		friend void display(teacher);
};
void display(teacher a){
	a.name="ali";
	cout<<a.name;
}
int main (){
	teacher t1;
    display(t1);	
}
