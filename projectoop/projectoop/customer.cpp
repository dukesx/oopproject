#include "customer.h"

customer::customer(string c , int d , string e , string f):info(e,f)
{
	destination=c;
	ticketno=d;
}

void customer::inputname()
{
cin>>name;
}

void customer::display()
{
	cout<<name<<endl;
}

customer customer::operator==(customer b)
{
	if ((name == b.name))
	{
		cout<<" Match Found ! "<<endl;
		cout<<b.name<<endl;
		cout<<b.destination<<endl;
	}
	else 
	{
		cout<< " No Match"<<endl;
	}

	return b;
}

void customer::inputdestin()
{
	int j;
	cin>>destination;

	if(destination == "peshawar")
	{ 
	   j = rand() %1000;
		cout<<"ticket no is : \n "<<j<<endl;
	}

	else 
	{
		cout<<"error ! \n"<<endl;
	}
}


void main()
{
	customer z[20],x;
	int f=0;
	do {

	cout<< " press 1 for entering data \n"<<endl;
	cout<< " press 2 for Searching data \n "<<endl;
	cin>>f;

	switch(f)
	{
case 1:
	for(int i =0 ; i<1;i++)
	{
		cout<<"Enter Name \n"<<endl;
		z[i].inputname();
		cout<<" Home :Islamabad \n"<<endl;
		cout<<" Destinations : \n"<<endl;
        cout<<"1.Peshawar \n"<<endl;
		cout<<"2.Lahore \n"<<endl;
		cout<<"3.Faisalabad \n"<<endl;
		cout<<"4.Chakwal \n"<<endl;
		cout<<"Enter Destination \n"<<endl;
		z[i].inputdestin();	
	}
	break;

case 2 :
	cout<< " Enter Name \n"<<endl;
	x.inputname();

	for(int j=0;j<1;j++)
	{
		x==z[j];
	}
	break;
	}
	}
	while(f!=0);
	getch();
}