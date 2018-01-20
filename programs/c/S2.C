/*Concat String*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
   char a[100], b[100];
   clrscr();
   printf("Enter the first string\n");
   gets(a);

   printf("\nEnter the second string\n");
   gets(b);

   strcat(a,b);

   printf("\nString obtained on concatenation is\n%s\n",a);

    getch ();
}

