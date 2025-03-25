#include<stdio.h>
#include<windows.h>

void xy(int x,int y)
{
    COORD crd;
    crd.X=x;
    crd.Y=y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),crd);
}

int main()
{
    //xy(55,13);
    system("COLORS 9E");
    printf("Hello");
    getch();
    return 0;
}
