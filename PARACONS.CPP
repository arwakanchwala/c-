#include<iostream.h>
#include<conio.h>
class factorial
{
int x,i;
int fact;
public:
factorial(int n);
void putdata();
};
factorial::factorial(int n)
{
	x=n;
	//int i;
	fact=1;
	//int i;
	for(i=1;i<=x;i++)
	{
	fact=fact*i;
	}
}
void factorial :: putdata()
{
cout<<"FActorial is="<<fact;
}
void main()
{
int n;
clrscr();
//factorial f;
cout<<"Enter number=";
cin>>n;
factorial f(n);
f.putdata();
getch();
}