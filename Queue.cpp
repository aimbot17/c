#include<iostream.h>
#include<conio.h>
using namespace std;
const int n=5;
int q[5];
int f=-1,r=-1;
void insert(int data)
{
if((r==n-1 && f==0)||(r+1==f))
{
cout<<"\nQ Overflow";
getch();
return;
}
if(r==n-1)
r=0;
else
r++;
q[r]=data;
if(f==-1)
f=0;
}
int del()
{
int data;
if(f==-1)
{
cout<<"\nQ s Underflow";
getch();
return 0;
}
data=q[f];
if(f==r)
r=f=-1;
else if(f==n-1)
f=0;
else
f++;
return data;
}
void disp()
{
int i;
if(f==-1)
{
cout<<"\nQ is empty";
getch();
return;
}
else
{
if(f<r)
{
for(i=f;i<=r;i++)
{
cout<<"\t"<<q[i];
}
}
else
{
for(i=f;i<=n-1;i++)
cout<<"\t"<<q[i];
for(i=0;i<=r;i++)
cout<<"\t"<<q[i];
}
}
}
int main()
{
int ch,e,p;
cout<<"\n1)Insert";
cout<<"\n2)Delete";
cout<<"\n3)Display";
cout<<"\n4)Exit";
do
{
cout<<"\n\nEnter your choice : ";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nEnter element:";
cin>>e;
insert(e);
break;
case 2:
e=del();
cout<<"\nThe deleted element is : "<<e;
getch();
break;
case 3:
disp();
getch();
break;
}
}while(ch!=4);
return 0;
}
