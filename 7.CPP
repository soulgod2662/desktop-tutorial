#include<iostream>
using namespace std;
class ratio
{
int num,den;
public:
void assign(int n,int d)
{
num=n;
den=d;
}
void convert();
void invert();
void print();
};
void ratio::convert()
{
cout<<"the ratio is "<<double(num)/double(den);
}
void ratio::invert()
{
int temp;
temp=num;
num=den;
den=temp;
}
void ratio::print()
{
cout<<"\n The values are "<<num<<"/"<<den<<"\n";
}
int main()
{

ratio r;
r.assign(22,7);
r.convert();
r.print();
r.invert();
cout<<"after invertng the values:";
r.print();

}
