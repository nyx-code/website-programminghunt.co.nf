// Factorial of a number

#include<iostream.h>
#include<conio.h>
void main()
{

    int num,factorial=1,a;
    clrscr();
    cout<<"Enter Number To Find Its Factorial:  ";

    cin>>num;

    for(a=1;a<=num;a++)

    {

        factorial=factorial*a;

    }
    
    cout<<"Factorial of Given Number is = "<<factorial<<endl;

    getch();

}
