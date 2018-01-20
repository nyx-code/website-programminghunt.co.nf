/*Array of Char Pointer*/

#include <stdio.h>
#include <conio.h>
const int MAX = 4;
void main()
{

	char *names[] = { "C", "C++", "HTML", "Java", };
	int i = 0;

	clrscr();
	for (i = 0; i < MAX; i++) {

		printf("Value of names[%d] = %s\n", i, names[i]);

	}

	getch ();
}

