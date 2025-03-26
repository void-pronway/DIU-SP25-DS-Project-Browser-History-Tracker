#include <stdio.h>
#include<windows.h>

void print_ByteSurf() {
    cord(35,5);
    printf("  ____        _        _____             __  ");
    cord(35,6);
    printf(" |  _ \\      | |      / ____|           / _| ");
    cord(35,7);
    printf(" | |_) |_   _| |_ ___| (___  _   _ _ __| |_  ");
    cord(35,8);
    printf(" |  _ <| | | | __/ _ \\\\___ \\| | | | '__|  _| ");
    cord(35,9);
    printf(" | |_) | |_| | ||  __/____) | |_| | |  | |   ");
    cord(35,10);
    printf(" |____/ \\__, |\\__\\___|_____/ \\__,_|_|  |_|   ");
    cord(35,11);
    printf("        __/ |                                ");
    cord(35,12);
    printf("       |___/                                 ");
}

void cord(int x, int y)
{
    COORD crd;
    crd.X=x;
    crd.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),crd);
}

int main() {
    print_ByteSurf();
    return 0;
}
