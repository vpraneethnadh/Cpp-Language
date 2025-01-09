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
		cout<<"\nJ:"<<j;
	}
	friend void sample::external(temp &x);
};
void sample::external(temp &x)
{
	cout<<"I:"<<x.i;
	cout<<"\nJ:"<<x.j;
}
void main()
{
	temp t1;
	t1.display();
	sample s1;
	s1.external(t1);
}

