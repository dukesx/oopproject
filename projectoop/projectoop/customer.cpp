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
	if ( name == b.name)
	{
		cout<< " Match"<<endl;
	}

	else 
	{
		cout<< " No Match"<<endl;
	}

	return b;
}

void main()
{
	customer z[20];
	char a[30];
	
	for(int i =0 ; i<3;i++)
	{
		cout<<"Enter Name "<<endl;
		z[i].inputname();
	}
	for(int j =0 ; j<3;j++)
	{
	z[j].display();

     z[2]==z[2];
	}
	getch();
}
