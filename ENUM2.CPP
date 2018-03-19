//c program of enum using switch case

#include<iostream.h>
#include<conio.h>
void main()
{
int n;
enum choice {red=1,green,blue};
clrscr();
cout<<"Enter number from 1 to 3=";
cin>>n;
switch(n)
{
case red:
cout<<"Your favourite colur is red";
break;
case green:
cout<<"Favourite clour is green";
break;
case blue:
cout<<"Your favourite colour is blue";
break;
default:
cout<<"Have a nice day";
break;
}
getch();
}