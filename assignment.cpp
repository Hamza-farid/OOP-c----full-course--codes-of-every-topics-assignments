#include <iostream>
using namespace std;

class StudentAttendance
{
        private:
       int arr[3];
        int s=0;

        public:
        int markattendence(int a);
        void displayAttendance();

};
int StudentAttendance :: markattendence(int a)
{
        s = a;
            if(a>3)
            {
                cout<<"Entered number of students are greater than array size...!"<<endl;
                exit(0);
            }
            else
            {
                for (int  i = 0; i < 3; i++)
                {
                    arr[i]=0;
                }
                
                for(int i = 0;i<=3;i++)
                {
                    int num;
                    cout<<"Enter your roll num student : "<<i<<" : # = ";
                    cin>>num;
                    if(num<1)
                    {
                        while (num<=1)
                        {
                        cout<<" Error! "<<endl;
                        cout<<"Enter your roll num again student # : "<<arr[i];
                        cin>>num;
                        }
                    }
                    arr[i]=num;
                }
            }
}
void StudentAttendance :: displayAttendance()
{
    cout<<"The number of students presents are : "<<s<<endl;
    for(int i=s;i>=0;i--)
    {
        cout<<"Their roll numbers are as folowing : "<<arr[i]<<endl;
    }
}
int main()
{
    int a;
    cout<<"Enter the number of students : ";
    cin>>a;
    StudentAttendance S;
    S.markattendence(a);
    S.displayAttendance();
    return 0;
}