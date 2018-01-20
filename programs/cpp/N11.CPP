// Number is Palindrome or Not

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,temp,d,revrs=0;

    clrscr();
    cout<<"Enter the number : ";
	cin>>i;
    temp=i;
    while(temp>0)
    {
	d=temp%10;
	temp/=10;
	revrs=revrs*10+d;

    }
    if(revrs==i)
	cout<<i<<" is Palindrome";
    else
	cout<<i<<" is not Palindrome";
    getch();
}
