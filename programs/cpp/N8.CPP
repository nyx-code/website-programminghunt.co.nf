// Find Primorial(P#) of a number

#include<iostream.h>
#include<conio.h>
void main()
{
    int num,i,j,flag,res = 1;
    clrscr();
    cout<<"Enter number : ";
    cin>>num;

    for(i=2;i<=num;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            res *= i;
        }
    }
    cout<<num<<"# = "<<res;
    getch();
}
