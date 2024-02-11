#include<iostream>
#include<cstring>
using namespace std;
int main()
{

cout<<"Enter string ";
char s[100], temp;
cin>>s;
int len=strlen(s);
int l=len-1;
for(int i=0;i<len/2;i++)
{
temp=s[l];
s[l]=s[i];
s[i]=temp;
l--;
}
cout<<"Reverse of the string= "<<s;

}
