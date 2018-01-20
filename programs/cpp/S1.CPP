// Concat String

#include <iostream.h>
#include <string.h>
#include<conio.h>

void main ()
{
   string str1 = "Programming";
   string str2 = "Hunt";
   string str3;
   int  len ;
   clrscr();
   // copy str1 into str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // concatenates str1 and str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // total lenghth of str3 after concatenation
   len = str3.size();
   cout << "str3.size() :  " << len << endl;

   getch();
}


