/*Program: Floyd's Triangle*/

#include <iostream.h>
#include <conio.h>
void main()
{
    int rows,i,j,k=0;
    clrscr();
    cout<<"Enter number of rows: ";
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;++j)
          cout<<k+j<<" ";
        ++k;
        cout<<endl;
    }
    getch();
}


