#include<iostream.h>
#include<conio.h>

class temp;
class sample
{
public:
	void external(temp &x);
};
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
	friend void sample::external(temp &x);
};
void sample::external(temp &x)
{
	cout<<"i:"<<x.i;
	cout<<"j:"<<x.j;
}
void main()
{
	temp t1;
	t1.display();
	sample s1;
	s1.external(t1);
}