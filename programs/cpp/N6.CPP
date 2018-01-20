// Find Even or Odd

#include <iostream.h>
#include <conio.h>

void main()
{
    int n;
    clrscr();
    cout<<"Enter an integer : ";
    cin>>n;
    if(n % 2 == 0)
    {
        cout<<n<<" is even.";
    }
    else
    {
        cout << n << " is odd.";
    }
    getch();
}
