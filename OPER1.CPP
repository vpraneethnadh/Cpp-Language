#include<iostream.h>
#include<conio.h>

class temp
{
public:
	int i;
	temp(int i)
	{
		this->i=i;
	}
	int operator >(temp &x)
	{
		if(this->i>x.i) return 0;
		else return 1;
	}
	int operator ==(temp &x)
	{
		if(this->i==x.i) return 0;
		else return 1;
	}
	void operator =(temp &x)
	{
		this->i=x.i;
		cout<<i;
	}
};
void main()
{
	temp t1(30),t2(20);
	if(t1>t2==0) cout<<"t1 big";
	else cout<<"t2 big";
	if((t1==t2)==0) cout<<"equal";
	else cout<<"not equal";
	t2=t1;
}
