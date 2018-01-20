/*Array Element Swapping*/

#include<iostream.h>
#include<conio.h>

void main()
{
    //variable declaration
    int arr[100],i,temp,size;
    clrscr();
    cout<<"Enter array size : ";
    cin>>size;

    cout<<"Enter elements in to array : \n";
    for(i=0;i<size;++i)
    {
        cin>>arr[i];
    }

    cout<<"\nArray before swaping elements : \n";
    for(i=0;i<size;++i)
    {
        cout<<arr[i]<<" ";
    }

    //element swapping logic
    for(i=1;i<size;i+=2)
    {
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }

    cout<<"\nArray after swapping elements : \n";
    for(i=0;i<size;++i)
    {
         cout<<arr[i]<<" ";
    }
    getch();
}
