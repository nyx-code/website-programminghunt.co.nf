/* Merging two Arrays*/

#include<iostream.h>
#include<conio.h>

void main()
{

    int arr1[100],arr2[100],resultarr[100],n,m,i,j,k,s;

    clrscr();
    cout<<" Merging Two Arrays";
    cout<<"\n\nEnter No. of Elements in First Array : ";
    cin>>n;

    cout<<"\nEnter Elements : \n";

    for(i=1;i<=n;i++)
    {
        cin>>arr1[i];
    }

    cout<<"\nEnter No. of Elements in Second Array : ";
    cin>>m;

    cout<<"\nEnter Elements in Sorted Order : \n";

    for(i=1;i<=m;i++)
    {
        cin>>arr2[i];
    }

    i=1,j=1;

        for(k=1;k<=n+m;k++)
        {
            // Compare Elements of Array A and Array B
            if(arr1[i]<arr2[j])
            {
                resultarr[k]=arr1[i];
                i++;

                if(i>n)
                {
                    goto b;
                }

            }

            else
            {
                resultarr[k]=arr2[j];
                j++;

                if(j>m)
                {
                    goto a;
                }

            }
        }


    a:
        // Copy the Remaining Elements of Array A to C
        for(s=i;s<=n;s++)
        {
            k++;
            resultarr[k]=arr1[s];
        }


    b:
        // Copy the Remaining Elements of Array B to C
        for(s=j;s<=m;s++)
        {
            k++;
            resultarr[k]=arr2[s];
        }

        cout<<"\n\nAfter Merging Two Arrays:\n";

        for(k=1;k<=n+m;k++)
        {
            cout<<resultarr[k]<<endl;
	}
	getch();
}
