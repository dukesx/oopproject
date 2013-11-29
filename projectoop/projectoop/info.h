#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
class info
{
protected :
	string name;
	string telephone;
public:
	info(){name="",telephone="";}
	info(string, string);
	void setname(string);
};

