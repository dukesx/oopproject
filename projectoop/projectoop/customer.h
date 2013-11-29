#include "info.h"
class customer :
	public info
{
public :
	string destination;
	int ticketno;
	customer(){destination="",ticketno=0;}
	customer(string,int,string,string);
	void inputname();
	void display();
	void searchcustom(customer);
	customer operator==(customer);
	void inputdestin();
	void inputticket();
	void checkticket(customer[]);
};

