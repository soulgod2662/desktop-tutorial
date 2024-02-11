#include<iostream>
using namespace std;
int Bsearch(int a[],int d);
int main()
{

int a[10],d,k,j,t,i;
for(i=0;i<10;i++)
{
cout<<"\n ENter number::";
cin>>a[i];
}
//Sorting away
for(k=1;k<10;k++)
{
for(j=0;j<10-k;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
cout<<"\n Enter a number to be searched::";
cin>>d;
int loc=Bsearch(a,d);
if(loc==-1)
{
cout<<"The number is not found";
}
else
{
cout<<"the position of searched numberis:"<<loc;
}
}
int Bsearch(int a[],int d)
{
int mid,lb=0,ub=9;
while(ub>=lb)
{
mid=(ub+lb)/2;
if(a[mid]==d)
{
return mid;
}
if(a[mid]<0)
{
lb=mid+1;
}
else
ub=mid-1;
}
return -1;
}
