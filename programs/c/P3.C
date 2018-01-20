/* Pattern 1 */

/*
*
**
***
****
*****
*/

#include <stdio.h>
#include <conio.h>
void main()
{

	int n, c, k;
	clrscr ();
	printf("Enter number of rows\n");
	scanf("%d", &n);

	for (c = 1; c <= n; c++) {

		for (k = 1; k <= c; k++)
			printf("*");

		printf("\n");
	}

	getch ();
}

