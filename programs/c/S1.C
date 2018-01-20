/*Compare two Strings*/

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

   if( strcmp(a,b) == 0 )
      printf("\nEntered strings are equal.\n");
   else
      printf("\nEntered strings are not equal.\n");

   getch();
}


