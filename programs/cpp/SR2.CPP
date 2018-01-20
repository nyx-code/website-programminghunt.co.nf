/*Program: Linear Sort*/

#include <iostream.h>
#include <conio.h>
#define MAXSIZE 100
class linearsort
{
    int arr[MAXSIZE],n;
    public:
    void getdataelements();
    void showdataelements();
    void sortelements();
};

void linearsort :: getdataelements()
{
    cout<<"How many elements you want : ";
    cin>>n;

    cout<<"enter elements :\n";
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
}

void linearsort :: showdataelements()
{
    cout<<"\nDisplay sorted elements\n";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"   ";
    }

}

void linearsort :: sortelements()
{
    int temp;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	    }
	}
    }
}

//main method
int main()
{   clrscr();
    cout<<"\nLinear Sort Method\n\n";
    linearsort obj;
    obj.getdataelements();
    obj.sortelements();
    obj.showdataelements();
    getch();
}


