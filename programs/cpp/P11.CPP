/*Program: Triangle with only Border*/

#include <iostream.h>
#include <conio.h>
void drawTriangle(char border, char filler, int length)
{
    int start =2;
    int base =4;
    int i;
    for(i=start; i<=length; i++)
    {
        for(int sp=0; sp<=length-i; sp++)
        {
            cout << " ";
        }
        if(i>start)
        {
            cout << border<< " ";
        }
        if(i>start)
        {
            for(int b=base; b<=i; b++)
            {
                cout <<filler << " ";
            }
        }
        cout <<  border << " ";
        cout <<endl;
    }

    for (int j = base; j<length+base; j++)
    {
        cout <<border<< " ";
    }
    cout << endl;
}


void main()
{
    int length =12;
    clrscr();
    cout<<"Triangle with only Border : \n\n";
    drawTriangle('*',' ',length);
    getch();
}


