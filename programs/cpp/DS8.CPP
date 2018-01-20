/* Minimum Spanning Tree */

#include <iostream.h>
#include <conio.h>
struct node
{
    int fr, to, cost;
}p[6];

int c = 0, dist1 = 0, dist = 0;
void primsalgo(int *ptr, int b[][4], int i, int j)
{
    ptr[i] = 1;
    while (c < 3)
    {
        int min = 999;
	for (int i = 0; i < 4; i++)
        {
            if (ptr[i] == 1)
	    {
		for (int j = 0; j < 4; )
                {
                    if (b[i][j] >= min || b[i][j] == 0)
                    {
                        j++;
                    }
                    else if (b[i][j] < min)
                    {
                        min = b[i][j];
                        dist = i;
                        dist1 = j;
                    }
                }
            }
        }
        ptr[dist1] = 1;
        p[c].fr = dist;
        p[c].to = dist1;
        p[c].cost = min;
	c++;
        b[dist][dist1] = b[dist1][dist]=1000;
    }
    for (int k = 0; k < 3; k++)
    {
	cout<<"Source node : "<<p[k].fr<<endl;
	cout<<"Destination node : "<<p[k].to<<endl;
	cout<<"Weight of node : "<<p[k].cost<<endl;
    }
}
void main()
{
    int a[4];
    clrscr();
    for (int i = 0; i < 4; i++)
    {
        a[i] = 0;
    }
    int b[4][4];
    for (i = 0; i < 4; i++)
    {
	cout<<"Enter values for "<<(i+1)<<" row : "<<endl;
	for (int j = 0; j < 4; j++)
        {
            cin>>b[i][j];
        }
    }
    primsalgo(a, b, 0, 0);
    getch();
}