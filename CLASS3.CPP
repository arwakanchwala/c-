#include<iostream.h>
#include<conio.h>
class sample
{
int m;
void read();
public:
void update();
void write();
};
void sample :: update()
{
cout<<"Name is=";
read();
}
void sample :: write()
{
cout<<"Age is=";
}
void sample :: read()
{
cout<<"You are=";
}
void main()
{
sample s;
s.update();
s.write();
getch();
}
//void sample :: update()
//{
//read();
//}
//getch();
//}