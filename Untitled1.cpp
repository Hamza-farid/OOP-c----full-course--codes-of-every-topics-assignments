#include<iostream>
#include<fstream>
#include <string.h>
using namespace std;
int main(){
	char ch;
	ifstream fin;
	fin.open("h.txt");
	ofstream fout;
	fout.open("b.txt");
	
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch>=97 && ch<=122)
		{ch = toupper(ch);
				}
		else if(ch>=65 && ch<=90)
		{ch = tolower(ch);
				}				
		fout<<ch;
	}
	fout.close();
	fin.close();
}
