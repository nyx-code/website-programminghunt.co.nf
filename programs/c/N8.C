// Add 'n' Numbers 

#include <stdio.h>
#include <conio.h>
void main()
{
   int n, sum = 0, c, value;

   clrscr();
   printf("Enter the number of integers you want to add\n");
   scanf("%d", &n);

   printf("Enter %d integers\n",n);

   for (c = 1; c <= n; c++)
   {
      scanf("%d",&value);
      sum = sum + value;
   }

   printf("Sum of entered integers = %d\n",sum);

   getch();
}
