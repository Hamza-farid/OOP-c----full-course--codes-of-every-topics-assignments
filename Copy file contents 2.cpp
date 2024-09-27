#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outFile("file1.txt");
	
	ifstream inFile("file2.txt");
	
	char a;
	while(inFile.get(a))
	{
		if(isupper(a))
		{
			a = tolower(a);
		}
		else
		{
			a = toupper(a);
		}
		outFile<<a;
	}
	inFile.close();
	outFile.close();
	return 0;
	
}






