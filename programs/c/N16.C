// Swap Two Numbers without third variable 

#include <stdio.h>
#include <conio.h>
void main()
{

	int x, y, ;

	clrscr();
	printf("Enter the value of x and y\n");
	scanf("%d%d", &x, &y);

	printf("Before Swapping\nx = %d\ny = %d\n", x, y);

	x = x + y;
	x = x - y;
	y = x - y;

	printf("After Swapping\nx = %d\ny = %d\n", x, y);

	getch();
}
