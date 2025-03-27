#include<stdio.h>
#include "colors.h"
#include<windows.h>

void error()
{
    system("cls");
    box();
    cord(40,15);
    printf("Our Budget is not Enough to Show You This Page");
    cord(50,16);
    //printf(":("reset);

}

void cord(int x, int y)
{
    COORD crd;
    crd.X=x;
    crd.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),crd);
}

void box()//inside width 111
{
    cord(4,1);
    printf(CYN"%c",201);
    for(int i=0;i<111;i++){
        printf("%c",205);
    }

    printf("%c",187);
    cord(116,2);
    printf("%c",186);
    cord(116,3);
    printf("%c",186);
    cord(116,4);
    printf("%c",186);
    cord(116,5);
    printf("%c",186);
    cord(116,6);
    printf("%c",186);
    cord(116,7);
    printf("%c",186);
    cord(116,8);
    printf("%c",186);
    cord(116,9);
    printf("%c",186);
    cord(116,10);
    printf("%c",186);
    cord(116,11);
    printf("%c",186);
    cord(116,12);
    printf("%c",186);
    cord(116,13);
    printf("%c",186);
    cord(116,14);
    printf("%c",186);
    cord(116,15);
    printf("%c",186);
    cord(116,16);
    printf("%c",186);
    cord(116,17);
    printf("%c",186);
    cord(116,18);
    printf("%c",186);
    cord(116,19);
    printf("%c",186);
    cord(116,20);
    printf("%c",186);
    cord(116,21);
    printf("%c",186);
    cord(116,22);
    printf("%c",186);
    cord(116,23);
    printf("%c",186);
    cord(116,24);
    printf("%c",186);
    cord(116,25);
    printf("%c",186);
    cord(116,26);
    printf("%c",186);
    cord(116,27);
    printf("%c",186);

    cord(116,28);
    printf("%c",188);
    cord(5,28);
    for(int i=0;i<111;i++){
        printf("%c",205);
    }
    cord(4,28);
    printf("%c",200);

    cord(4,2);
    printf("%c",186);
    cord(4,3);
    printf("%c",186);
    cord(4,4);
    printf("%c",186);
    cord(4,5);
    printf("%c",186);
    cord(4,6);
    printf("%c",186);
    cord(4,7);
    printf("%c",186);
    cord(4,8);
    printf("%c",186);
    cord(4,9);
    printf("%c",186);
    cord(4,10);
    printf("%c",186);
    cord(4,11);
    printf("%c",186);
    cord(4,12);
    printf("%c",186);
    cord(4,13);
    printf("%c",186);
    cord(4,14);
    printf("%c",186);
    cord(4,15);
    printf("%c",186);
    cord(4,16);
    printf("%c",186);
    cord(4,17);
    printf("%c",186);
    cord(4,18);
    printf("%c",186);
    cord(4,19);
    printf("%c",186);
    cord(4,20);
    printf("%c",186);
    cord(4,21);
    printf("%c",186);
    cord(4,22);
    printf("%c",186);
    cord(4,23);
    printf("%c",186);
    cord(4,24);
    printf("%c",186);
    cord(4,25);
    printf("%c",186);
    cord(4,26);
    printf("%c",186);
    cord(4,27);
    printf("%c"reset,186);
}

int main()
{
    box();

    return 0;
}
