// Find Even or Odd 

#include <stdio.h>
#include <conio.h>
void main()
{

	int n;

	clrscr();
	printf("Enter an integer\n");
	scanf("%d", &n);

	if ((n / 2) * 2 == n)
		printf("Even\n");
	else
		printf("Odd\n");

	getch();

}
