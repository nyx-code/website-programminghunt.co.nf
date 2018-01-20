// Convert String to Uppercase

#include <iostream.h>
#include <stdio.h>
#include <conio.h>

void main( )
{
	char str[80];
	clrscr();
	cout<<"Enter a string : ";
	gets(str);

	for(int i=0;str[i]!='\0';i++)
		str[i] = (str[i]>='a' && str[i]<='z')?(str[i]-32):str[i];

	cout<<str;

	getch();
}


