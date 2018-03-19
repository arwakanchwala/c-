#include<iostream.h>
#include<conio.h>
class copy
{
int n;
public:
copy(int x)
{
n=x * x;
}
void putdata();
};
void copy::putdata()
   {
   cout<<"Square of number is="<<n<<endl;
   }
   void main()
   {
   int x;
   clrscr();
   cout<<"Enter number";
   cin>>x;
   copy c1(x);
   copy c2=c1;
   c1.putdata();
   cout<<"After copying data="<<endl;
   c2.putdata();
   getch();
   }
