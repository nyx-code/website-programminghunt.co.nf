// Swap two numbers using friend function

#include<iostream.h>
#include<conio.h>

class Sample
{
   private:
       int x,y;
   public:
       void setdata(int a,int b)
       {
	  x=a;
	  y=b;
       }
       void showdata()
       {
	  cout<<"x="<<x<<"\ny="<<y;
       }

    friend void swap(Sample &s);
};

void swap(Sample &s)
{
    int temp;
    temp=s.x;
    s.x=s.y;
    s.y=temp;
}

void main()
{
    Sample s;
    int x,y;

    clrscr();
    cout<<"Enter x = ";
    cin>>x;
    cout<<"Enter y = ";
    cin>>y;

    s.setdata(x,y);

    cout<<"\nBefore Swapping\n";
    s.showdata();
    cout<<"\nAfter Swapping\n";
    swap(s);
    s.showdata();

    getch();
}