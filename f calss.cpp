#include<iostream>
using namespace std;
class a{
	int x;
	public:
		a(int b){x=b;
		}
		friend class b;
};
class b{
	public:
		void show(a t){
			cout<<t.x;
		}
};
int main(){
	a a1(0);
	b b1;
	b1.show(a1);
}
