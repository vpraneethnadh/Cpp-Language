#include<iostream.h>
#include<conio.h>
class sample;
class temp
{
	int i,j;
public:
	temp()
	{
		i=10;
		j=10;
	}
	void display()
	{
		cout<<i<<j;
	}
	friend class sample;
};
class sample
{
public:
	void external(temp &x)
	{
		cout<<x.i<<x.j;
	}
};
void main()
{
	temp t1;
	t1.display();
	sample s1;
	s1.external(t1);
}