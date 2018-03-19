//call by reference variable in function          //int &b=a;

#include<iostream.h>
#include<conio.h>
void fun (int &b)
{
cout<<"\nBefore adding="<<b;
b=b+10;                        //if &b is given 4 to lines,it shows address
cout<<"\nAfter adding="<<b;
}
void main()
{
int a=10;
clrscr();
cout<<"\nBefore function call="<<a;
fun(a);
cout<<"\nAfter function call="<<a;
getch();
}
