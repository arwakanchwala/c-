//passing a variable in function

#include<iostream.h>
#include<conio.h>
void callval(int x)
{
cout<<"\nBefore adding="<<x;
x=x+10;
cout<<"\nAfter adding="<<x;
}
void main()
{
int a=10;
clrscr();
cout<<"\nBefore function call="<<a;
callval(a);
cout<<"\nAfter function call="<<a;
getch();
}