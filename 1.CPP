#include<iostream.h>
#include<conio.h>

class temp
{
	int i,j;
public:
	temp()
	{
		i=100;
		j=100;
	}
	void display()
	{
		cout<<"i:"<<i;
		cout<<"j:"<<j;
	}
	friend void external(temp t1);
};
void external(temp t1)
{
	cout<<"i:"<<t1.i;
	cout<<"j:"<<t1.j;
}
void main()
{
	temp t1;
	external(t1);
}