#include<iostream.h>
#include<conio.h>
class temp
{
	int i,j;
public:
	temp()
	{
		i=100;
		j=200;
	}
	void display()
	{
		cout<<"i:"<<i;
		cout<<"\nj:"<<j;
	}
	friend void external(temp &x);
};
void external(temp &x)
{
	cout<<"i:"<<x.i;
	cout<<"\nj:"<<x.j;
}
void main()
{
	clrscr();
	temp t1;
	t1.display();
	external(t1);
}