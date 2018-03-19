#include<iostream.h>
#include<conio.h>
class item
{
int x;
float y;
public:
void getdata(int no,float cost)
{
x=no;
y=cost;
}
void putdata()
{
cout<<"Item number="<<x<<endl;
cout<<"Cost is="<<y;
}
};
void main()
{
item i;
clrscr();
i.getdata(2,50.2);
i.putdata();
getch();
}
