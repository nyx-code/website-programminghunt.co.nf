/*Matrix Subtraction*/

#include<iostream.h>
#include<conio.h>

void main()
{
   int m, n, c, d, first[10][10], second[10][10], sub[10][10];

   clrscr();
   cout << "Enter the number of rows and columns of matrix : ";
   cin >> m >> n;
   cout << "Enter the elements of first matrix : \n";

   for (  c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
	 cin >> first[c][d];

   cout << "Enter the elements of second matrix : \n";

   for ( c = 0 ; c < m ;c++ )
      for ( d = 0 ; d < n ; d++ )
	    cin >> second[c][d];

   for ( c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
	 sub[c][d] = first[c][d] - second[c][d];

   cout << "Subtraction of entered matrices:-\n";

   for ( c = 0 ; c < m ; c++ )
   {
      for ( d = 0 ; d < n ; d++ )
	 cout << sub[c][d] << "\t";

      cout << endl;
   }

   getch();
}