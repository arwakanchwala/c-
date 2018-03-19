#include<iostream.h>
#include<conio.h>
class simple_int
{
float f;
float si;
public:
void getdata(float rate);
void putdata();
};
void simple_int :: getdata(float rate)
{
int x,p,t;
f=rate;
cout<<"Enter p=";
cin>>p;
cout<<"Enter t=";
cin>>t;
x=(p*f*t)/100;
si=x;
}
void simple_int :: putdata()
{
cout<<"Simple interest is="<<si;
}
void main()
{
simple_int s;
clrscr();
s.getdata(4.7);
s.putdata();
getch();
}

