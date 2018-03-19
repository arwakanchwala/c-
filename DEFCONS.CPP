#include<iostream.h>
#include<conio.h>
class demo
{
int x;
int y;
public:
demo();
void input();
void display();
};
demo::demo()
{
x=0;
y=0;
}
void demo::input()
{
cout<<"Enter value of x=";
cin>>x;
cout<<"Enter value of y=";
cin>>y;
}
void demo::display()
{
cout<<endl<<"x="<<x;
cout<<endl<<"Y="<<y;
}
void main()
{
clrscr();
demo d;
cout<<"Value after initialization";
 d.display();
 d.input();
 cout<<"Value after user input=";
 d.display();
 getch();
 }
