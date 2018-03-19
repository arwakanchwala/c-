#include<iostream.h>
#include<conio.h>
class Base
{
public:
virtual void show() =0;
};
class Derived:public Base
{
public:
void show()
{
cout<<"Implementation of virtual function in derived class";
}
};
void main()
{
clrscr();
Base *b;
Derived d;
b=&d;
b->show();
getch();
}