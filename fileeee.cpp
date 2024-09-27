#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("a.txt");
	fout<<"name: hamza"<<endl<<"roll no.70";
	fout.close();int a=0;int b=0;
	char x;
	ifstream fin;
	fin.open("a.txt");
	while(!fin.eof())
    {
		fin.read((char*)&x,sizeof(x));
		if(x==' ')
		{
			a++;
		}
		else
		{
			b++;
		}		
	}
	fin.close();
	cout<<"the number of spaces is  = "<<a<<endl;
	cout<<"the number of character is  = "<<b-a<<endl;	
}
