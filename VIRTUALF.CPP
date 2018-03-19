#include<iostream.h>
#include<conio.h>
class base
{
public:
void display()
{
cout<<"Display base"<<endl;
virtual void show()
{
cout<<"Show base"<<endl;
}
};
class derived:public base
{
public:
void display()
{
cout<<"Display derived"<<endl;
}
void show()
{
cout<<"Show derived"<<endl;
}
};
void main()
{
clrscr();
base b;
derived d;
base *bptr;
cout<<"Bptr points to base"<<endl;
bptr=&b;
bptr->display();
bptr->show();
cout<<"Bptr points to derived"<<endl;
bbptr=&d;
bptr->display();
bptr->show();
getch();
}