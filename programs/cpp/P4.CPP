/*Program: Half Pyramid with Characters*/

#include <iostream.h>
#include <conio.h>
void main()
{
    int i,j;
    char input,temp='A';
    clrscr();
    cout<<"Enter uppercase character you want in triange at last row: ";
    cin>>input;
    for(i=1;i<=(input-'A'+1);++i)
    {
        for(j=1;j<=i;++j)
           cout<<temp<<" ";
        ++temp;
        cout<<endl;
    }
    getch();
}


