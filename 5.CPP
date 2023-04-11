#include<iostream.h>
#include<conio.h>

class Ratio
{
public:
void print()
{
cout<<"\n now x is alive";
}
Ratio()
{
cout<<"\n object is born";
}
~Ratio()
{
cout<<"object dies";
}
};
void main()
{
clrscr();
Ratio r1;
r1.print();
getch();
}
