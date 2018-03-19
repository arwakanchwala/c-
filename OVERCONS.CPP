
#include<iostream.h>
#include<conio.h>
class reverse
{
int n;
int rev,rem;
public:
reverse();
reverse(int x);
void putdata();
void getdata();
};
reverse::reverse()
{
	rev=0;
	n=1234;
	while(n!=0)
		{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
		}
}
reverse::reverse(int x)
{
rev=0;
n=x;
while(n!=0)
	{
	rem=n%10;
	rev=(rev*10)+rem;
	n/=10;
	}
}
void reverse::putdata()
{
cout<<"First reverse number is="<<rev<<endl;
}
void reverse::getdata()
{
cout<<"Second reverse number is="<<rev;
}
void main()
{
int x;
clrscr();
cout<<"Enter number=";
cin>>x;
reverse r1;
reverse r2(x);
r1.putdata();
r2.getdata();
getch();
}
