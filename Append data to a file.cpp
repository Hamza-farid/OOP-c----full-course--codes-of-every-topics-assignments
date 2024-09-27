#include<iostream>
//#include<string>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;  // Create Object of Ofstream
    fout.open("a.txt",ios::app); // Append mode
	fout<< "\n Writing to a file opened from program.\n"; // Writing data to file
    cout<<"\n Data has been appended to file";
    fout.close(); // Closing the file
    return 0;
}
