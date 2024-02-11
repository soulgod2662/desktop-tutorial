#include<iostream>
using namespace std;
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
cout<<"\n The name of the student is TOM ";
}
};
int main()
{

Person*p;
Person p1;
p=&p1;
p->print();
Student s1;
p=&s1;
p->print();

}
