#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream fin("file.txt");
	string str;
	do
	{
		fin>>str;
		cout<<str<<endl;
	}while(!fin.eof());
}
