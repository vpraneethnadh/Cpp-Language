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
		j=200;
	}
	void display()
	{
		cout<<"I:"<<i;
		cout<<"J:"<<j;
	}
	friend class sample;
};
void sample::external(temp &x)
{
	cout<<"I:"<<x.i;
	cout<<"J:"<<x.j;
}

void main()
{
	temp t1;
	sample s1;
	t1.display();
	s1.external(t1);
}