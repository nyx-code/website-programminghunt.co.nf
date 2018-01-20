// Convert String to Char Array

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    string tmp = "C Plus Plus";
    clrscr();
    cout<<"String : "<<tmp<<endl;

    cout<<"Converting string to char array : ";

    char charArray[1024];
    strncpy(charArray, tmp.c_str(), sizeof(charArray));
    charArray[sizeof(charArray) - 1] = 0;

    for(int i = 0;charArray[i]!=0;i++)
    {
        cout<<endl<<"charArray["<<i<<"] :\t"<<charArray[i];
    }

    getch();
}


