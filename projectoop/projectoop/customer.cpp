#include "customer.h"

customer::customer(string c , int d , string e , string f):info(e,f)
{
	destination=c;
	ticketno=d;
}

void customer::inputname()
{
getline(cin,name);
getline(cin,name);
}

void customer::display()
{
	cout<<name<<endl;
	cout<<destination<<endl;
	cout<<ticketno<<endl;
}

void customer::searchcustom(customer b)
{
	if (name == b.name)
	{
		int mm = rand() %1000;
		cout<<" Match Found ! "<<endl;
		cout<<"Customer Name :"<<b.name<<endl;
		cout<<"Customer Destination : "<<b.destination<<endl;
		cout<<"Ticket No : "<<b.ticketno<<endl;

		if(mm>60<500)
		{
			int ll = mm/60;
			cout<<"Departure Time : "<<ll<<"Hours"<<endl;
		}

		else if(mm >500)
		{
			int lm = mm/3600;
			cout<<"Departure Time : "<<lm<<"Hours"<<endl;
		}
		
	else 
	{
		cout<< " No Match"<<endl;
	}
	}
}

void customer::inputdestin()
{
	getline(cin,destination);

	if(destination == "peshawar")
	{ 
	   ticketno = rand() %1000;
		cout<<"ticket no is : \n "<<ticketno<<endl;
	}

		else if(destination == "chakwal")
	{ 
	  ticketno = rand() %2000;
	
		cout<<"ticket no is : \n "<<ticketno<<endl;
	}

			else if(destination == "faisalabad")
	{ 
	   ticketno = rand() %3000;

		cout<<"ticket no is : \n "<<ticketno<<endl;
	}

		else if(destination == "lahore")
	{ 
	   ticketno = rand() %4000;
	  
		cout<<"ticket no is : \n "<<ticketno<<endl;
	}

	else 
	{
		cout<<"error ! \n"<<endl;
	}
	}

void customer::inputticket()
{
	cin>>ticketno;
}

void customer::checkticket(customer x[])
{
	for(int i=0 ; i<20;i++)
	{
	if(ticketno==x[i].ticketno)
	{
		cout<<"Customer Name : "<<x[i].name<<endl;
		cout<<"Customer Destination :"<<x[i].destination<<endl;
		cout<<"Customer Ticket No : "<<x[i].ticketno<<endl;
		break;
	}

	}
}

void main()
{
	string xxd;
	customer z[20],x;
	int f=0,ID;
	int i=0;
	do 
	{
		           cout<< "               *****************************************************"<<endl;
                   cout<< "               *****************************************************"<<endl;
	               cout<< "                                  MAIN MENU          \n"<<endl;
	               cout<< "                                1. Book A Ticket          "<<endl;
	               cout<< "                                2. Search The Database    "<<endl;
	               cout<< "                                3. Press 0 To Exit         "<<endl;
	               cout<<"               ******************************************************"<<endl;
				   cout<< "               ******************************************************"<<endl;
	cin>>f;

	if(i>20)
	{
		cout<<"Error ! Database Full"<<endl;
	}

	else
	{
	switch(f)
	{
case 1:
		cout<<"Enter Your Name \n"<<endl;
		z[i].inputname();
		cout<<" Home :Islamabad \n"<<endl;
		cout<<" Enter Your Destination : \n"<<endl;
        cout<<"1.Peshawar \n"<<endl;
		cout<<"2.Lahore \n"<<endl;
		cout<<"3.Faisalabad \n"<<endl;
		cout<<"4.Chakwal \n"<<endl;
		cout<<"Enter Destination \n"<<endl;
		z[i].inputdestin();	
		i++;
	break;

case 2 :
	cout<< "Enter Ticket No"<<endl;
	x.inputticket();
	x.checkticket(z);
break;
	}
	}
	}
while(f!=0);
		
	if ((f) == 0)
	{
		cout<< " Exiting......... "<<endl;
		cout<< " Dumping Dvar .... "<<endl;
		cout<< " Freeeing Memory ...... "<<endl;
		cout<< " Press Any Key To Exit ! "<<endl;
	}
	getch();
}