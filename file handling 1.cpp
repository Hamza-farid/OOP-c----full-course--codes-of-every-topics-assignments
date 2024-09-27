#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a;
	ifstream fill("file222.txt");
	fill>>a;
	cout<<a;
}
