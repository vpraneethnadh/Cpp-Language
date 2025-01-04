#include<iostream.h>
#include<conio.h>

class temp;

class sample
{
public:
	void outside(temp &x);
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
	friend void sample::outside(temp &x);
};
void sample::outside(temp &x)
{

	cout<<"\n"<<x.i;
	cout<<"\n"<<x.j;
}
void main()
{
	temp t1;
	t1.display();
	sample s1;
	s1.outside(t1);
}


