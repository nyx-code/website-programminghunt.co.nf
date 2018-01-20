
/*Program: Reverse Star Triangle*/

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,n,j;

    clrscr();
    cout<<"Enter number of lines for Pattern : ";
    cin>>n;

    for(i=n;i>0;i--)
    {
        for(j=n-i;j>0;j--)
        {
            cout<<"  ";
        }
        for(j=2*i-1;j>0;j--)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    getch();
}


