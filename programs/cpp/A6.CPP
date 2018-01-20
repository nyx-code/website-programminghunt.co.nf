/*Identity Matrix*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>

int main()
{
    int mat[5][5],order,i,j,flag=0;

    clrscr();
    cout<<"Enter size of matrix : ";
    cin>>order;

    cout<<"Enter matrix element : \n";
    for(i=0;i<order;i++)
    {
        cout<<"\n";
        for(j=0;j<order;j++)
        {
            cin>>mat[i][j];
        }
    }

    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
        {
            if(i==j)
            {
                if(mat[i][j]!=1)
                {
                flag=1;
                break;
                }
            }
            else
            {
                if(mat[i][j]!=0)
                {
                flag=1;
                break;
                }
            }
        }
    }

    cout<<"The given matrix is ";
    if(flag==0)
    cout<<"an identity matrix.\n";
    else
    cout<<"not an identity matrix.\n";

    getch();
}