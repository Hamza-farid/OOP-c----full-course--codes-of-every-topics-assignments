#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr[7];
	int count=0;
	ifstream file("jk.txt");
	while(!file.eof())
	{
		file>>arr[count];count++;
	}
	for(int i=0;i<count;i++){
		cout<<arr[i];
	}
}
