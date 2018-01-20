// Decimal to Binary

#include<iostream.h>
#include<conio.h>
void binary(int num)
{
    int rem;

    if (num <= 1)
    {
        cout << num;
        return;
    }
    rem = num % 2;
    binary(num / 2);
    cout << rem;
}

void main()
{
    int dec, bin;
    clrscr();
    cout << "Enter the number : ";
    cin >> dec;

    if (dec < 0)
        cout << dec << " is not a positive integer." << endl;
    else
    {
        cout << "The binary form of " << dec << " is ";
        binary(dec);
        cout << endl;
    }
    getch();
}
