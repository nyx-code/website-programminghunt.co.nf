/*Program: Star Pattern1*/

#include <iostream.h>
#include <conio.h>
void main()
{
    //variable declaration
    int i,j,rows;
    clrscr();
    //take number of rows
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for(i=rows;i>=1;--i)
    {
        for(j=1;j<=i;++j)
        {
           cout<<"* ";
        }
        cout<<"\n";
    }
    getch();
}

