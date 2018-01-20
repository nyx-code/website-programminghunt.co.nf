/*Smallest and Largest number in an Array*/

#include<iostream.h>
#include<conio.h>
void main ()
{

    int size=5;
    clrscr();

    int arra[ 5 ];

    int smallelement,largestelement;

    cout<<"\nEnter array elements : ";
     for ( int i = 0; i < size; i++ )
    {
	cin>> arra[i];
    }
    largestelement=smallelement=arra[0];
    for (i = 0; i < size; i++)
    {
	if(arra[i]>largestelement)
	{
	    largestelement=arra[i];
	}
	 if(arra[i]<smallelement)
	{
	    smallelement=arra[i];
	}
    }
     cout << "The biggest number is " << largestelement << endl;
    cout << "The smallest number is " << smallelement << endl;
    getch();
}
