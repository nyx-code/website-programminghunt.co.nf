// Convert String to Lowercase

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
		str[i] = (str[i]>='A' && str[i]<='Z')?(str[i]+32):str[i];

	cout<<str;

	getch();
}


