#include "info.h"
class customer :
	public info
{
protected :
	string destination;
	int ticketno;
public:
	customer(){destination="",ticketno=0;}
	customer(string,int,string,string);
	void inputname();
	void display();
	customer operator==(customer);
	void inputdestin();
};

