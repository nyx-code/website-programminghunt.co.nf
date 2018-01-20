// Swap Two Number Using Bitwise XOR 

#include <stdio.h>
#include <conio.h>
void main()
{
    long i, k;

    clrscr();
    printf("Enter two integers \n");
    scanf("%ld %ld", &i, &k);
    printf("\n Before swapping i= %ld and k = %ld", i, k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("\n After swapping i= %ld and k = %ld", i, k);
    getch();
}
