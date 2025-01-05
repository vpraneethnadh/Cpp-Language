#include<iostream.h>
#include<conio.h>

class temp2;
class temp1
{
	int i,j;
public:
	temp1()
	{
		i=100;
		j=100;
	}
	void display()
	{
		cout<<"i:"<<i;
		cout<<"j:"<<j;
	}
	friend class temp2;
};

class temp2
{
public:
	void external(temp1 &x)
	{
		cout<<"i:"<<x.i;
		cout<<"j:"<<x.j;
	}
};
void main()
{
	temp1 t1;
	temp2 t2;
	t1.display();
	t2.external(t1);
}