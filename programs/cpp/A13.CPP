/* Symmetric Matrix*/

#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>

void main()
{
     int arr[10][10],i,j,size;

     clrscr();
     cout<<"Enter size of matrix : ";
     cin>>size;


    cout<<"Enter values in matrix : \n";
     for(i=1;i<=size;i++)
     {
	  for(j=1;j<=size;j++)
	  {
		cin>>arr[i][j];
	  }
     }
     for(i=1;i<=size;i++)
     {
	  for(j=1;j<=size;j++)
	  {
	       if(arr[i][j]!=arr[j][i])
	       {
		   cout<<"\n\nMatrix is not symmetric";

		    exit(0);
	       }
	  }
     }
     cout<<"\n\nMatrix is symmetric";
     getch();
}