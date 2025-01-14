#include<iostream.h>

class base
{
public:
	int i;
	base()
	{
		cout<<"base class constructor";
	}
	void display(int x)
	{
		cout<<"Base:"<<x;
	}
};

class derived:public base
{
/*
public:
	int i;
	void display(int x)
	{
		cout<<i;
	}
*/

public:
	int j;
	derived()
	{
		cout<<"derived clas constructor";
	}
	void display()
	{
		cout<<"Derived:";
	}
};

void main()
{
	derived d;
	d.display();
}