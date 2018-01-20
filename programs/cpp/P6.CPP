/*Program: Number Pattern 1*/

#include<iostream.h>
#include<conio.h>

void main()
 {
     int num, c, k;
     clrscr();
     cout<<"Enter number of rows : ";
     cin>>num;
     cout<<"\n";

     for ( c = 1 ; c <= num ; c++ )
     {
         for( k = 1 ; k <= c ; k++ )
         {
             cout<<c;
         }

	 cout<<"\n";
     }
     getch();
 }

