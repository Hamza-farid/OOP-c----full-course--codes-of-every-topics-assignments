#include<iostream>
using namespace std;
class c1{ 
	public: 
	c1()
	{	
	cout<<"this is c1 constructor"<<endl;
	}
	void function(){ 
		cout<<"I am in c1"<<endl; 
	} 
		
	}; 
	class c2: public c1{ 
	public: 
	c2()
	{
	cout<<"this is c2 constructor"<<endl;
	}
	
	void function(){ 
	cout<<"I am in c2"<<endl; 
	} 
	}; 
	class c3: public c1 { 
	public: 
		void function(){ 
cout<<"I am in c3"<<endl; 
		} 
	};
	 
	int main(){ 	
	c3  test2; 	
	test2.function(); 
	return 0; 
}


	
