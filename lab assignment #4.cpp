//M.HAMZA FARID  (70128112)   3-B  SUBMITTED TO:- SIR MAJID,
#include<iostream>
#include<fstream>
using namespace std;
class employee
{   protected:
	char name[20];
	int id;
	public:
	virtual	float calsalary()=0;
	virtual	void cdisplay()=0;
};
class salary:public employee
{
	float t;
	public:
	salary()
	{
		cout<<"annual salary is 12000\n";
		cout<<"salary:$";
	}
    salary(int i)
	{
	}
	virtual	float calsalary()
	{
		int annual=12000;
		t= annual/12;
		return t;
	}
	void cdisplay()
	{
		cout<<"pay :"<<t;
	}
};
class hourly:public employee
{
	
	public:
	float d,f;
	hourly()
	{
		//cout<<"hours he worked: ";cin>>d;
		cout<<"per hour = 120\n";
		cout<<"salary:$";
	}
    hourly(int i)
	{
	}
	virtual	float calsalary()
	{
		float perhour=120;
		//f= (perhour*d);
		return perhour;
	}
	void cdisplay()
	{
		cout<<"pay :"<<f;
	}
						
};
class commission:public employee
{
    float months,s;
    public:
	commission()
	{
		cout<<"enter monthly salary: ";cin>>months;
		cout<<"0.8 % commission as my sap id 701281128\n";
		cout<<"salary:$";
    }
    commission(int i)
	{
	}
	virtual	float calsalary()
	{
		s= months+((months*0.8)/100);
		return s;
	}
	virtual void cdisplay()
	{
		cout<<"pay :"<<s;
	}		
};
int main()
{
	cout<<"\t\t\t\t\tTHE MENU";
	employee *x;int ax;char cha;char t;string name;float dd;int id;int flag1=0;int flag2=0;int flag3=0;
l:	
h:	cout<<"\n\t\t\tplease enter what operation you like to perform\n";
	cout<<"\t\t\t1. to put data of employee\n";
	cout<<"\t\t\t2. to display data of employee\n";
	cout<<"\t\t\t3. to exit from program\n";
	cout<<"\t\t\tNOTE: PLEASE DON'T ENTER ALPHABET HERE\n";
	cout<<"\t\t\tPROGRAM RUN INFINITLY AS DATA STORED IN INTEGER\n";
	cin>>ax;
	if(ax==1)
	{
		ofstream out("a2.txt",ios::app);
		cout<<"\t\t\tplease enter employee's data\n";
		do
		{
		   cout<<"\t\t\tfirst select type of employee\n";
		   cout<<"h for hourly \nc for commission \ns for salary\n(h,s,c)?";
		   cin>>cha;
		    if(cha=='c')
		    {
		      cout<<"enter name:";cin>>name;
		      out<<"name: "<<name<<endl;
			  cout<<"enter id:";cin>>id;
			  out<<"id: "<<id<<endl;	
			  commission c;
	          x=&c;
	          cout<<x->calsalary();
	          flag1=1;
	          out<<"salary"<<x->calsalary()<<endl;
	          cout<<"\ndo you want to continue (y/n)?";
	          cin>>t;
		    }
		    else if(cha=='s')
		    {
		      cout<<"\nenter name:";cin>>name;
		      out<<"name: "<<name<<endl;
			  cout<<"enter id:";cin>>id;
			  out<<"id: "<<id<<endl;		
			  salary s;
	          x=&s;
	          cout<<x->calsalary();
	          flag2=1;
	          out<<"salary: "<<x->calsalary()<<endl;
	          cout<<"\ndo you want to continue (y/n)?";
	          cin>>t;
		    }
		    else if(cha=='h')
		    {
		        cout<<"\nenter name:";cin>>name;
		        out<<"name: "<<name<<endl;
			    cout<<"enter id:";cin>>id;
			    out<<"id: "<<id<<endl;
			    cout<<"enter hours:";cin>>dd;
			    hourly h;
	            x=&h;
	            cout<<x->calsalary()*dd;
	            flag3=1;
	            out<<"hourly: "<<x->calsalary()*dd<<endl;
	            cout<<"\ndo you want to continue (y/n)?";
	            cin>>t;
		    }    
	    }while(t=='y');out.close();    
    }
	else if(ax==2)
	{
	    char i;
	    ifstream fin;
	    fin.open("a2.txt",ios::app);
	    fin.read((char*)&i,sizeof(i));		
        cout<<"=================================================================================================\n";
	    cout<<"=================================================================================================\n";
		cout<<"\n\t\t\t$$$$$---VIEWING EMPLOYEE'S DATA---$$$$$\n\n";
		if(flag3==1)
        {
         cout<<"Name & Id successfully stored in file\n";
         cout<<"-------------------------------------\n";
		 cout<<"FOR HOURLY EMPLOYEE:\n";
         cout<<"**********\n";
		 hourly a(1);
   	     x=&a;
   	     cout<<"pay:$";
   	     cout<<x->calsalary()*dd;
   	     cout<<"\n**********\n\n";
        }
		if(flag1==1)
	    {	
         cout<<"Name & Id successfully stored in file\n";
		 cout<<"-------------------------------------\n";
		 cout<<"FOR COMMISSION EMPLOYEE:\n";
		 cout<<"**********\n";	
         commission a(1);
         x=&a;
         cout<<"pay:$"<<x->calsalary();
         cout<<"\n***********\n\n";
	    }
        if(flag2==1)
        {
         cout<<"Name & Id successfully stored in file\n";
         cout<<"-------------------------------------\n";
         cout<<"FOR SALARY EMPLOYEE:\n";
         cout<<"**********\n";
   	     salary a(1);
   	     x=&a;
   	     cout<<"pay:$"<<x->calsalary();
   	     cout<<"\n**********\n\n";
        }
    fin.close();   
    }   
	if(ax==3)
	{
	  cout<<"exit form program successfully...!\n";
	  cout<<"thanks for your time";
	  exit(0);
    }
    if(t=='n') 
	{
	  goto h;
	}
	else
	{
		cout<<"wrong input\nplease enter again.\n";
		goto l;
	}
}
