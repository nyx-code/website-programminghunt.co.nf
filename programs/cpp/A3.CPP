/*Array of Objects*/
#include <iostream.h>
#include <conio.h>
class Demo
{
    int x;

    public:
        void setX(int i)
        {
            x = i;
        }
        int getX()
        {
            return x;
        }
};

void main()
{
    Demo obj[4];
    int i;
    clrscr();
    cout<<"Array Objects :\n\n";
    for(i=0; i < 4; i++)
        obj[i].setX(i);

    for(i=0; i < 4; i++)
        cout<<"obj["<<i<<"].getX() : "<< obj[i].getX()<<endl;

    getch();
}
