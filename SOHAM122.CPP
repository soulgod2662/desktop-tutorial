#include<iostream.h>
#include<conio.h>
void swap(int*p1,int*p2)
{
int temp;
temp=*p1;
*p1=*p2;
*p2=temp;
}
void main()
{
clrscr();int
a,b;
cout<<"\n enter two numbers";
cin>>a>>b;
cout<<"\n numbers before swapping";
cout<<"\n a="<<a;
cout<<"\n b="<<b;
swap(&a,&b);
cout<<"\n numbers after swapping";
cout<<"\n a="<<a;
cout<<"\n b="<<b;
getch();
}