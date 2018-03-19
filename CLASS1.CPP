#include<iostream.h>
#include<conio.h>
class person
{
char name[10];
int age;
public:
void getdata();
void putdata();
};
void person :: getdata()
{
cout<<"Enter the name=";
cin>>name;
cout<<"Enter age=";
cin>>age;
}
void person :: putdata()
{
cout<<"Name is="<<name;
cout<<"Age is="<<age;
}
void main()
{
person p;
p.getdata();
p.putdata();
getch();
}
