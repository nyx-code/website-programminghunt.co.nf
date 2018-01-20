// Generate Random numbers

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void main()
{

int min,max,i,range,r,x;
unsigned first = time(NULL);

clrscr();
cout<<"FIRST = " << first <<endl;
srand(first);
cout<<"ENTER THE MINIMUM NUMBER :";
cin>>min;
cout<<"ENTER THE MAXIMUM NUMBER :";
cin>>max;
cout<<"ENTER THE NO.OF TERMS YOU WANT :";
cin>>x;

range=max-min+1;

for(i=0;i<x;i++)
	{
	r=rand()/100%range+min;
	cout<<r<<" ";
	}

getch();

}
