#include<iostream>
using namespace std;
class B;
class A
{
	string name;
	int id;
	public:
		A(string x,int y)
		{
			name = x;
			id = y;
		}
		friend class B;
		
	
};
class B
{
	public:
		void dispaly(A j)
		{
			
			cout<<"name: "<<j.name<<" id: "<<j.id;
		}
		
};
int main()
{
	A m("ali",13);
	B s;
	s.dispaly(m);
	return 0;
}
