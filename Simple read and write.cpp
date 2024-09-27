#include <fstream>
#include <iostream>
using namespace std;

int main() 
{
	string sap_id; 
	string name;
	
	cout<<"Enter Your Name : ";
	cin>>name;
	
	cout<<"Enter Your SAP ID : ";
	cin>>sap_id;
	
	// Create the file if it does not already exist
	ofstream fout("info.txt");
	if (fout) 
	{
		// Write the SAP ID and name to the file
    	fout << "SAP ID: " << sap_id << endl;
    	fout << "Name: " << name << endl;
	}
	fout.close();

	// Read the contents of the file
	string line;
	ifstream fin("info.txt");
	if (fin) 
	{
		while (getline(fin, line)) 
		{
			// Display the contents of the file on the screen
			cout << line <<endl;
    	}
	}
	fin.close();
	return 0;
}
