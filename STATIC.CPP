#include<iostream.h>
#include<conio.h>

class temp
{
	int i;
public:
	static int j;

	temp(int x)
	{
		i=x;
		j++;
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
	//temp t1(10),t2(20),t3(30);
	//t1.display();
	temp::display();
}