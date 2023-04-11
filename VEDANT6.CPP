#include<iostream.h>
#include<conio.h>
class Person
{
public:
virtual void print()
{
cout<<"\n The name of person is bob";
}
};
class Student:public Person
{
public:
void print()
{
cout<<"\n The name of the student is TOM";
}
};
void main()
{
clrscr();
Person*p;
Person p1;
p=&p1
p->print();
Student s1;
p=&s1;
p->print();
getch();
}
