#include<iostream>
using namespace std;
int main(){
int a[10],i,k,j,t;


for(i=0;i<10;i++)
{
cout<<"enter element ";
cin>>a[i];
}
cout<<"---------The elements are--------- \n";
for(i=0;i<10;i++)
{
cout<<a[i]<<endl;
}
for(k=1;k<10;k++)
{
for(j=0;j<(10-k);j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]= a[j+1];
a[j+1]=t;
}
}
}

cout<<"\n---------sorted array--------- \n";
for(j=0;j<10;j++)
{
cout<<endl<<a[j];
}

return 0;
}
