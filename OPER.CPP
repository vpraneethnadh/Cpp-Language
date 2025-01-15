#include<iostream.h>
#include<conio.h>
class temp
{
	int i;
public:
	temp(int i)
	{
		this->i=i;
	}
	int operator >(temp &x)
	{
		if(this->i>x.i) return 0;
		else return 1;
	}
	temp operator +(temp &x)
	{
		temp t3(0);
		t3.i=this->i+x.i;
		return t3;
	}
	temp operator -(temp &x)
	{
		temp t3(0);
		t3.i=this->i=x.i;
		return t3;
	}
	void display()
	{
		cout<<i;
	}
};
void main()
{
	clrscr();
	temp t1(100),t2(20),t3(0);
	if(t1>t2) cout<<"t1 IS LARGE";
	else cout<<"t2 IS LARGE";
	t3=t1+t2;
	t3=t1-t2;
	t3.display();
}

