#include<iostream.h>
#include<conio.h>

class train;
class sample
{
public:
	void outside(train &z);
};

class train
{
	int trnum;
	char pasname[30];
	int km,age;
	float cost;
	int discount;
	float final_cost;
public:
	void read()
	{
		cout<<"ENTER TRAIN NUMBER: ";
		cin>>trnum;
		cout<<"ENTER PASSENGER NAME: ";
		cin>>pasname;
		cout<<"ENTER THE PASSENGER AGE: ";
		cin>>age;
		cout<<"ENTER THE NUMBER OF KILOMETERS PASSENGER IS TRAVELLING: ";
		cin>>km;
	}
	void cal()
	{
		if(km<=100) cost=km*1;
		else if(km<=200) cost=100+(km-100)*2;
		else if(km<=300) cost=100+200+(km-200)*3;
		else if(km<=400) cost=100+200+300+(km-300)*4;
		else cost=100+200+300+400+(km-400)*5;

		if(age<=12) discount=(30*cost)/100;
		else if(age>=60) discount=(50*cost)/100;
		else discount=0;

		final_cost=cost-discount;
	}
	void display()
	{
		cout<<"TRAIN NUMBER="<<trnum;
		cout<<"\nPASSENGER NAME="<<pasname;
		cout<<"\nPASSENGER AGE="<<age;
		cout<<"\nKILOMETERS TRAVELLING="<<km;
		cout<<"\nDISCOUNT OBTAINED="<<discount;
		cout<<"\nFINAL BILL="<<final_cost;
	}
	friend void sample::outside(train &z);
};
void sample::outside(train &z)
{
	cout<<"\n"<<z.pasname;
	cout<<"\n"<<z.trnum;
}
void main()
{
	clrscr();
	train t1;
	t1.read();
	t1.cal();
	t1.display();
	sample s1;
	s1.outside(t1);
}