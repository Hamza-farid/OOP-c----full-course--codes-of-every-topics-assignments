#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("a.txt");
	fout<<"name: hamza"<<endl<<"roll no.70";
	fout.close();
	ofstream fo("a.txt",ios::app);
	fo<<"class 3-b";
	fo.close();	
}
