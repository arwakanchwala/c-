#include<iostream.h>
#include<conio.h>
class invent2;
class invent1;
{
int code,items;
float price;
public:
invent(int a,int b,int c)
{
code=a;
items=b;
price=c;
}
void putdata()
{
cout<<"Code="<<code<<endl;
cout<<"Items="<<items<<endl;
cout<<"Value="<<value<<endl;
}
int getcode()
{
return code;
}
int getitems()
{
return items;
}
int getprice()
{
return price;
}
operator float()
{
return(items * price);
}
};
class invent2{
int code;
float value;
public:
invent2()
{
code=0;
value=0;
}
void putdata()
{
cout<<"Code="<<code<<endl;
cout<<"Value"<<value<<endl;
}
invent2(invent 1p)
{
code=p.getcode();
value=p.getitems() * p.getprice();
}
};
void main()
{
clrscr();
invent s1(100,5,140.0);
invent2 d1;
float total_value;
total_value=s1;
d1=s1;
cout<<"Invent1"<<endl;
s1.putdata();
cout<<"Stock value"<<endl;
cout<<"Value="<<total_value<<endl;
cout<<"Invent2"<<endl;
d1.putdata();
getch();
}