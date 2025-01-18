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
	void operator ++(int);
};
void main()
{
	temp t1;
	t1++;
}