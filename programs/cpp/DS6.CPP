/* Insertion  Sort*/

#include <iostream.h>
#include<conio.h>

void main()
{
    int a[100], n, i, j, k, temp;
    clrscr();
    cout<<"Enter no of element of array : ";
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        cout<<"Enter "<<i<<" element : ";
        cin>>a[i];
    }
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            if (a[j] < a[j-1])
            {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
            else
                break;
        }
    }

    cout<<"Insertion  Sort Output"<<endl;
    for (k = 0; k <n; k++)
    {
        cout<<a[k]<<endl;
    }
    getch();
}