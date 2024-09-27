#include<iostream>
using namespace std;
//using std::cout;
//using std::endl;
namespace n1{
	int age = 25;
}

namespace n2{
	int age = 225;
}
int main(){
	//std::cout<<n2::age<<std::endl;
	cout<<n2::age<<endl;
}

