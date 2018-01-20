/*Program: Alphabet Pattern1*/

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

void main()
{
    //variable declaration
    int x, y, n;
    char ch;
    clrscr();
    cout<<"Number of rows : ";
    cin>>n;

    for(x = 1;x<= n;x++)
    {
        cout<<"\n";
        ch = 'A';
	for(y = 1;y<=x;y++)
	{
	    cout<<ch;
	    ch++;
	}
    }
    getch();
}
