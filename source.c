#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include "colors.h"
#define maxHistory 10



typedef struct history{
    int order;
    char url[50];
    char urlName[50];
    time_t  s;
    struct tm* current_time;
    struct history *prev;
    struct history *next;
}node;

//function prototype for our program
void homePage();
void searchPage();
void allHistory();
void searchHistory();
void goPrev();
void goFrwd();
void loadfromfile();
void savetofile();
void start();
void end();
void loading();
void coord(int x, int y);
void time();
int continueP(char *x);
void box();
int optionChoice();

//function Prototype for the pages
void diu();
void yt();
void x();
void fb();
void cf();
void blc();
void gmail();



int main()
{
    char continueChoice;
    int choice;
    start();
    loadFromFile();

    usleep(1000000);

    do{
        system("cls");
        homePage();
        choice=optionChoice();


        cord(40,26);
        printf(CYN"Do you want go to the HomePage?"WHT"(y/n)"reset);
        continueChoice=getch();
    }while(continueP(&continueChoice));

    return 0;
}

void cord(int x, int y)
{
    COORD crd;
    crd.X=x;
    crd.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),crd);
}

void print_ByteSurf() {
    cord(38,3);
    printf(CYN"  ____        _        _____             __  ");
    cord(38,4);
    printf(" |  _ \\      | |      / ____|           / _| ");
    cord(38,5);
    printf(" | |_) |_   _| |_ ___| (___  _   _ _ __| |_  ");
    cord(38,6);
    printf(" |  _ <| | | | __/ _ \\\\___ \\| | | | '__|  _| ");
    cord(38,7);
    printf(" | |_) | |_| | ||  __/____) | |_| | |  | |   ");
    cord(38,8);
    printf(" |____/ \\__, |\\__\\___|_____/ \\__,_|_|  |_|   ");
    cord(38,9);
    printf("        __/ |                                ");
    cord(38,10);
    printf("       |___/                                 "reset);
}


void start()
{
    system("cls");
    box();
    //printf(CYN"Opening ByteSurf\n\n"reset);
    print_ByteSurf();
    cord(25,15);
    for(int loading=0; loading<70; loading++)
    {

        Sleep(20);
        printf(BLU"%c"reset,219);     //178,254


    }
}

void end()
{
    system("cls");
    box();
    cord(50,13);
    for (int i = 0; i <= 100; i += 10)
    {
        printf("\r\t\t\t\t\t      "GRN"Saving surf history...%d%%"reset, i);
        usleep(200000); //200000 microseconds = 200 milisec = 0.2 sec
    }
    system("cls");
    box();
    cord(5,14);
    usleep(300000);
    printf(CYN"\t\t\t\t\t    T ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Th ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Tha ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Than ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank y ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank yo ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you f ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you fo ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for c ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for ch ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for cho ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for choo ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for choos ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for choosi ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for choosin ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for choosing ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for choosing B ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for choosing By ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for choosing Byt ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for choosing Byte ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for choosing ByteS ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for choosing ByteSu ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for choosing ByteSur ");
    usleep(100000);
    cord(5,14);
    printf("\t\t\t\t\t    Thank you for choosing ByteSurf ");
    usleep(100000);
    cord(5,14);
    sleep(1);


    int dotCount = 5;
    int loopCount = 2;

    for (int loop = 0; loop < loopCount; loop++)
    {
        for (int i = 0; i <= dotCount; i++)
        {
            cord(53,15);
            printf(RED"Shuting Down"reset);
            for (int j = 0; j < i; j++)
            {
                printf(RED"."reset);
            }

            Sleep(300);
        }
        cord(53,15);
        printf(RED"Shuting Down"reset"      ");
        Sleep(300);
    }
    system("cls");
}

void loadFromFile()
{


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

void homePage()
{
    box();
    print_ByteSurf();

    cord(30,12);
    printf(CYN"%c",218);

    cord(31,12);
    for(int i=0;i<58;i++){
        printf("%c",196);
    }

    cord(89,12);
    printf("%c",191);
    cord(89,13);
    printf("%c",179);
    cord(89,14);
    printf("%c",217);

    cord(31,14);
    for(int i=0;i<58;i++){
        printf("%c",196);
    }

    cord(30,13);
    printf("%c",179);
    cord(30,14);
    printf("%c"reset,192);

    cord(52,13);
    printf("1. Search URL.....");

    cord(54,16);
    printf("Quick Access");

    cord(30,18);
    printf(CYN"%c",218);
    cord(30,19);
    printf("%c",179);
    cord(30,20);
    printf("%c",192);

    cord(31,20);
    for(int i=0;i<10;i++){
        printf("%c",196);
    }

    cord(47,20);
    for(int i=0;i<10;i++){
        printf("%c",196);
    }

    cord(63,20);
    for(int i=0;i<10;i++){
        printf("%c",196);
    }

    cord(79,20);
    for(int i=0;i<10;i++){
        printf("%c",196);
    }

    //jk
    cord(31,18);
    for(int i=0;i<10;i++){
        printf("%c",196);
    }

    cord(47,18);
    for(int i=0;i<10;i++){
        printf("%c",196);
    }

    cord(63,18);
    for(int i=0;i<10;i++){
        printf("%c",196);
    }

    cord(79,18);
    for(int i=0;i<10;i++){
        printf("%c",196);
    }

    cord(89,18);
    printf("%c",191);
    cord(73,18);
    printf("%c",191);
    cord(57,18);
    printf("%c",191);
    cord(41,18);
    printf("%c",191);

    cord(46,18);
    printf("%c",218);
    cord(62,18);
    printf("%c",218);
    cord(78,18);
    printf("%c",218);

    cord(46,20);
    printf("%c",192);
    cord(62,20);
    printf("%c",192);
    cord(78,20);
    printf("%c",192);

    cord(89,20);
    printf("%c",217);
    cord(73,20);
    printf("%c",217);
    cord(57,20);
    printf("%c",217);
    cord(41,20);
    printf("%c",217);

    cord(41,19);
    printf("%c",179);
    cord(46,19);
    printf("%c",179);
    cord(57,19);
    printf("%c",179);
    cord(62,19);
    printf("%c",179);
    cord(73,19);
    printf("%c",179);
    cord(78,19);
    printf("%c",179);
    cord(89,19);
    printf("%c"reset,179);

    cord(33,19);
    printf("1. FB");
    cord(49,19);
    printf("2. BLC");
    cord(65,19);
    printf("3. DIU");
    cord(81,19);
    printf("4. CF");

    cord(98,25);
    printf(CYN"%c",218);
    for(int i=0;i<15;i++){
        printf("%c",196);
    }

    cord(98,27);
    printf("%c",192);
    for(int i=0;i<15;i++){
        printf("%c",196);
    }
    cord(114,25);
    printf("%c",191);
    cord(114,27);
    printf("%c",217);
    cord(114,26);
    printf("%c",179);
    cord(98,26);
    printf("%c"reset,179);

    cord(103,26);
    printf("5. Menu");


}

int optionChoice()
{
    int choice;
    cord(30,22);
    printf(CYN"%c",218);

    cord(31,22);
    for(int i=0;i<58;i++){
        printf("%c",196);
    }

    cord(89,22);
    printf("%c",191);
    cord(89,23);
    printf("%c",179);
    cord(89,24);
    printf("%c",217);

    cord(31,24);
    for(int i=0;i<58;i++){
        printf("%c",196);
    }

    cord(30,23);
    printf("%c",179);
    cord(30,24);
    printf("%c"reset,192);

    cord(47,23);
    printf("Enter your choice here : ");
    scanf("%d",&choice);
    return choice;

}

int continueP(char *x)
{
    while(1){
    if(*x=='y'||*x=='Y'){
        return 1;
    }
    else if(*x=='n'||*x=='N')
        {
            end();
            exit(0);
        }
    else if((*x!='n'||*x!='N')&&(*x!='y'||*x!='Y')){

        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t        Your Choice is "RED"Invalid!"reset" Choice must be "GRN"y/n"reset".\n\n");
        printf("\n\t\t\t\t\t        Do you want to continue?\n");
        printf("\t\t\t\t\t\t          (y/n)");
        *x=getch();

        }


    }
}



