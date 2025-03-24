#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include "colors.h"




//function prototype for our program
void homePage();
void searchPage();
void allHistory();
void searchHistory();
void goPrev();
void goFwrd();
void loadfromfile();
void savetofile();
void start();
void end();
void loading();
void coord(int x, int y);
void time();

//function Prototype for the pages
void diu();
void yt();
void x();
void fb();
void cf();
void blc();



int main()
{
    coord(10,10);
    printf("Hello");

}

void coord(int x, int y)
{
    COORD crd;
    crd.X=x;
    crd.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),crd);
}


void start()
{
    system("cls");

}
