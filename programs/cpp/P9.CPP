/*Program: Star Half Pyramid*/

#include <iostream.h>
#include <conio.h>
void main()
{
    int i,j,rows;
    clrscr();
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=1;i<=rows;++i)
    {
        for(j=1;j<=i;++j)
        {
           cout<<"* ";
        }
        cout<<"\n";
    }
    getch();
}


