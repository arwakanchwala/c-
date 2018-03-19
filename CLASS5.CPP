#include<iostream.h>
#include<conio.h>
void main()
{
int i;
int size;
clrscr();
cout<<"Enter the size of an array=";
cin>>size;
int *p=new int[size];
cout<<"Creating an array of size="<<size;
cout<<"\nEnter the elements=";
for(i=0;i<size;i++)
{
cin>>p[i];
}
for(i=0;i<size;i++)
{
cout<<"The elements are="<<p[i];
}
getch();
}