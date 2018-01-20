// Check Prime Number

#include<iostream.h>
#include<conio.h>
void main()
{
    int number,count=0;
    clrscr();
    cout<<"Enter number to check its Prime or Not : ";
    cin>>number;

    for(int a=1;a<=number;a++)
        if(number%a==0)
            count++;

    if(count==2)
        cout<<"Its Prime Number \n";
    else
        cout<<"Its not a Prime Number\n";

    getch();
}