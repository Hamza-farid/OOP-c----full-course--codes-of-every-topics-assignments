#include<iostream>
using namespace std;

class distance_in_inches;  // Declaration of class distance_in_inches;
class distance_in_feet
{
	private:
		float feet;

	public:
		distance_in_feet()    // constructor for class distance_in_feet
		{
			cout<<"Enter the first distance (in feet) : ";
			cin>>feet;
		}

		friend void add(distance_in_feet,distance_in_inches);  //declaration of friend function
};

class distance_in_inches
{
	private:
		float inches;
		
	public:
		distance_in_inches() // constructor for class distance_in_inches
		{
			cout<<"Enter the second distance (in inches) : ";
			cin>>inches;
		}
		
		friend void add(distance_in_feet,distance_in_inches);  //declaration of friend function
};

void add(distance_in_feet a, distance_in_inches b) // definition of friend function
{
	float total;
	//b.inches = b.inches/12;
	total=(a.feet++)+b.inches/12;
	cout<<"Total Distance : "<<total<<" feet";
}

int main()
{
	distance_in_feet A;
	distance_in_inches B;
	add(A,B);
}
