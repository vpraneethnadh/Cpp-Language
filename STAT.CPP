#include<iostream.h>
#include<conio.h>

class temp
{
	int i;
public:
	static int j;

	temp()
	{
		i=10;
		j=j+2;
	}
	static void display()
	{
		cout<<j;
	}
};

int temp::j=0;

void main()
{
	clrscr();
	temp t1,t2,t3;
	t1.display();
	temp::display();
}