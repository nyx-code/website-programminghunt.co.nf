// Swap two numbers

#include<iostream.h>
#include<conio.h>
void main()

{

 int var1, var2, swap;
 clrscr();
 cout<<"Enter value for first integer:  ";
 cin>>var1;
 cout<<"Enter value for second integer:  ";
 cin>>var2;
 cout<<"\nValues Before swapping:  \n"<<endl;
 cout<<"First Integer ="<<var1<<endl;
 cout<<"Second Integer ="<<var2<<endl;
 swap=var1;
 var1=var2;
 var2=swap;
 cout<<"\nValues After swapping:  \n"<<endl;
 cout<<"First Integer ="<<var1<<endl;
 cout<<"Second Integer ="<<var2<<endl;
 getch();

}
