#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	int num=6;
	int hours[num];
	int count=0;
	ifstream fin;
	fin.open("d.txt");
	do{
		fin>>hours[count];
		count++;
	}while(!fin.eof());
	for(int i=0;i<6;++i){
		cout<<hours[i]<<endl;
	}
	fin.close();
}
