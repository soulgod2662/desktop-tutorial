#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
cout<<"Enter string ";
char s[100], temp;
get(s);
int len=strlen(s);
int l=len-l;
for(int i=0;i<len/2;i++)
{
temp=s[i];
s[i]=temp;
l--;
}
cout<<"Reverse of the string= "<<s;
getch();
}