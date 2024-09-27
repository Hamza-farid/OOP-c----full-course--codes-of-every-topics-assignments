#include<iostream>
using namespace std;
namespace t{
	int id=99;
}
namespace s{
	int id=98;
}
using namespace s;
int main(){
cout<<id;
}
