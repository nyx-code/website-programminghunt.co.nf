/* Array of int Pointer */

#include <stdio.h>
#include <conio.h>
const int MAX = 3;

void main()
{

	int var[] = { 10, 100, 200 };
	int i, *ptr[100];

	clrscr();
	for (i = 0; i < MAX; i++) {

		ptr[i] = &var[i]; /* assign the address of integer. */
	}

	for (i = 0; i < MAX; i++) {

		printf("Value of var[%d] = %d\n", i, *ptr[i]);

	}

	getch();
}
