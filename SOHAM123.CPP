#include<iostream.h>
#include<conio.h>
class circle
{
private:
float x,y;
float radius;
public:
circle()
{
x=0.0;
y=0.0;
radius=0.0;
}
void getdet()
{
cout<<"\n enter x coordinates";
cin>>x;
cout<<"\n enter y coordinates";
cin>>y;
cout<<"\n enter radius";
cin>>radius;
}
void area()
{
cout<<"\n area= "<<(3.14*radius*radius);
}
void circumference()
{
cout<<"\n circumference= "<<(2*3.14*radius);
}
void print()
{
cout<<"\n circle details are as follows: ";
cout<<"\n x= "<<x;
cout<<"\n y= "<<y;
cout<<"\n radius= "<<radius;
area();
circumference();
}
};
void main()
{
clrscr();
circle obj;
obj.getdet();
obj.print();
getch();
}
