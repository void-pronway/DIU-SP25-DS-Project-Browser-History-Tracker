#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include "colors.h"
#define maxHistory 15



typedef struct history{
    int order;
    char url[50];
    char urlName[50];
    char tmstr[20];
    time_t  tm;
    struct history *prev;
    struct history *next;
}node;

node *head=NULL;
node *tail=NULL;
node *current=NULL;
int historyCount=0;
int prevCount=0;

//function for DLL
void insert(char urlname[],char url[]);
void del();
void delall();
void search();
//void currentPage();
void goPrev();
void goFrwd();
void printAll();

//function prototype for our program
void homePage();
void searchPage(char *url);
void menuPage();
void menuDesign();
void allHistory();
void deleteAllHistory();
void searchHistory();
void start();
void end();
void loading();
void coord(int x, int y);
void time();
int continueP(char *x);
void box();
int optionChoice();
void print_ByteSurf();
void error_p();
void error();

//function Prototype for the pages
void diu(); //done
void yt(); //sourov
void x();  //sourov
void fb(); //done
void cf();  //done
void blc();  //done
void gmail();  //mashfiq



int main()
{
    char continueChoice;

    start();

    usleep(1000000);

    do{
        system("cls");
        homePage();

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

void searchPage(char *url)
{
    system("cls");
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

    cord(50,15);
    printf(BLK WHTB" Type your URL here "reset);
    printf(BBLU"");
    cord(31,13);
    scanf("%s",url);


}

void homePage()
{
    system("cls");

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
    printf("2. FB");
    cord(49,19);
    printf("3. BLC");
    cord(65,19);
    printf("4. DIU");
    cord(81,19);
    printf("5. CF");

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
    printf("6. Menu");


    char url[50];
    int choice=optionChoice();
        fflush(stdin);

        switch(choice){
        case 1:
            searchPage(url);
            if(strcmp(url,"home")==0){
                homePage();
            }
            else if(strcmp(url,"diu.edu.bd")==0){              // insert func er kaaj baki ekhane
                insert("DIU",url);
                diu();

            }
            else if(strcmp(url,"elearn.daffodilvarsity.edu.bd")==0){
                insert("BLC",url);
                blc();

            }
            else if(strcmp(url,"codeforces.com")==0){
                insert("CodeForces",url);
                cf();

            }
            else if(strcmp(url,"facebook.com")==0){
                insert("Facebook",url);
                fb();

            }
            else if(strcmp(url,"youtube.com")==0){
                insert("Youtube",url);
                yt();

            }
            else if(strcmp(url,"x.com")==0){
                insert("X",url);
                x();

            }
            else if(strcmp(url,"gmail.com")==0){
                insert("Gmail",url);
                gmail();

            }
            else{
                error_p();
                break;
            }
            break;
        case 2:
            insert("Facebook","facebook.com");
            fb();
            break;
        case 3:
            insert("BLC","elearn.daffodilvarsity.edu.bd");
            blc();
            break;
        case 4:
            insert("DIU","diu.edu.bd");
            diu();
            break;
        case 5:
            insert("CodeForces","codeforces.com");
            cf();
            break;
        case 6:
            menuPage();
            break;
        default:
            system("cls");
            error();

        }


}

void menuPage()
{
    system("cls");
    menuDesign();

    int choiceMenu;
    cord(37,3);
    printf("Enter your choice here : ");
    scanf("%d",&choiceMenu);

    switch(choiceMenu){
    case 1:
        homePage();
        break;
    case 2:
        allHistory();
        break;
    case 3:
        delall();
        deleteAllHistory();
        break;
    case 4:
        searchHistory();
        break;
    default:
        system("cls");
        error();
    }

}

void menuDesign()
{
    box();

    //1st

    cord(6,2);
    printf(CYN"%c",218);

    for(int i=1;i<=13;i++){
        printf("%c",196);
    }

    cord(19,2);
    printf("%c",191);
    cord(19,3);
    printf("%c",179);
    cord(19,4);
    printf("%c",179);
    cord(19,5);
    printf("%c",217);

    cord(7,5);
    for(int i=1;i<=12;i++){
        printf("%c",196);
    }

    cord(6,3);
    printf("%c",179);
    cord(6,4);
    printf("%c",179);
    cord(6,5);
    printf("%c",192);

    cord(11,3);
    printf(WHT"Menu"reset);
    cord(9,4);
    printf(MAG"(1) "WHT"Home"reset);

    //2nd
    cord(6,7);
    printf(CYN"%c",218);

    for(int i=1;i<=13;i++){
        printf("%c",196);
    }

    cord(19,7);
    printf("%c",191);
    cord(19,8);
    printf("%c",179);
    cord(19,9);
    printf("%c",179);
    cord(19,10);
    printf("%c",179);
    cord(19,11);
    printf("%c",179);
    cord(19,12);
    printf("%c",217);

    cord(7,12);
    for(int i=1;i<=12;i++){
        printf("%c",196);
    }

    cord(6,8);
    printf("%c",179);
    cord(6,9);
    printf("%c",179);
    cord(6,10);
    printf("%c",179);
    cord(6,11);
    printf("%c",179);
    cord(6,12);
    printf("%c",192);

    cord(11,9); printf(WHT"All");
    cord(9,10); printf("History"reset);
    cord(11,13); printf(MAG"(2)"reset);

    //3rd

    cord(6,14);
    printf(CYN"%c",218);

    for(int i=1;i<=13;i++){
        printf("%c",196);
    }

    cord(19,14);
    printf("%c",191);
    cord(19,15);
    printf("%c",179);
    cord(19,16);
    printf("%c",179);
    cord(19,17);
    printf("%c",179);
    cord(19,18);
    printf("%c",179);
    cord(19,19);
    printf("%c",217);

    cord(7,19);
    for(int i=1;i<=12;i++){
        printf("%c",196);
    }

    cord(6,15);
    printf("%c",179);
    cord(6,16);
    printf("%c",179);
    cord(6,17);
    printf("%c",179);
    cord(6,18);
    printf("%c",179);
    cord(6,19);
    printf("%c",192);

    cord(10,16); printf(WHT"Clear");
    cord(9,17); printf("History");
    cord(11,20); printf(MAG"(3)");

    //4th

    cord(6,21);
    printf(CYN"%c",218);

    for(int i=1;i<=13;i++){
        printf("%c",196);
    }

    cord(19,21);
    printf("%c",191);
    cord(19,22);
    printf("%c",179);
    cord(19,23);
    printf("%c",179);
    cord(19,24);
    printf("%c",179);
    cord(19,25);
    printf("%c",179);
    cord(19,26);
    printf("%c",217);

    cord(7,26);
    for(int i=1;i<=12;i++){
        printf("%c",196);
    }

    cord(6,22);
    printf("%c",179);
    cord(6,23);
    printf("%c",179);
    cord(6,24);
    printf("%c",179);
    cord(6,25);
    printf("%c",179);
    cord(6,26);
    printf("%c",192);

    cord(11,23); printf(WHT"Find");
    cord(9,24); printf("History");
    cord(11,27); printf(MAG"(4)");

    //choice

    cord(20,2);
    printf(CYN"%c",218);

    cord(21,2);
    for(int i=0;i<58;i++){
        printf("%c",196);
    }

    cord(79,2);
    printf("%c",191);
    cord(79,3);
    printf("%c",179);
    cord(79,4);
    printf("%c",217);

    cord(21,4);
    for(int i=0;i<58;i++){
        printf("%c",196);
    }

    cord(20,3);
    printf("%c",179);
    cord(20,4);
    printf("%c",192);

    //doted line
    cord(20,5);
    for(int i=0;i<96;i++){
        printf("-");
    }
    cord(20,6);
    printf("%c",179);
    cord(20,8);
    printf("%c",179);
    cord(20,10);
    printf("%c",179);
    cord(20,12);
    printf("%c",179);
    cord(20,14);
    printf("%c",179);
    cord(20,16);
    printf("%c",179);
    cord(20,18);
    printf("%c",179);
    cord(20,20);
    printf("%c",179);
    cord(20,22);
    printf("%c",179);
    cord(20,24);
    printf("%c",179);
    cord(20,26);
    printf("%c"reset,179);



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

void diu() //done
{
    system("cls");
    box();
    //Prev box
    cord(5,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(5,3);
    printf("%c"reset,179);

    printf(BMAG"1."WHT"Prev");

    cord(5,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(12,3);
    printf("%c"reset,179);

    //Next box
    cord(13,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(13,3);
    printf("%c"reset,179);
     printf(BMAG"2."WHT"Next");
    cord(13,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(20,3);
    printf("%c"reset,179);

    //Url box
    cord(21,2);
    printf(CYN"%c",218);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(21,3);
    printf("%c"reset,179);
    printf("URL: ");
    cord(21,4);
    printf(CYN"%c",192);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(78,3);
    printf("%c"reset,179);

    //Search box
    cord(79,2);
    printf(CYN"%c",218);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(79,3);
    printf("%c"reset,179);
    printf(BMAG"3." WHT" Search ");
    cord(79,4);
    printf(CYN"%c",192);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(97,3);
    printf("%c"reset,179);


    //Choice box
    cord(98,2);
    printf(CYN"%c",218);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(98,3);
    printf("%c"reset,179);
    printf(" Choice: ");
    cord(98,4);
    printf(CYN"%c",192);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(115,3);
    printf("%c"reset,179);


    //logo
    cord(46,6);
    printf(BBLU"  ____"reset);
    printf(BWHT"    ___   "reset);
    printf(BGRN"_   _  "reset);

    cord(46,7);
    printf(BBLU" |  _ \\"reset);
    printf(BWHT"  |_ _| "reset);
    printf(BGRN"| | | | "reset);

    cord(46,8);
    printf(BBLU" | | | |"reset);
    printf(BWHT"  | |  "reset);
    printf(BGRN"| | | | "reset);

    cord(46,9);
    printf(BBLU" | |_| |"reset);
    printf(BWHT"  | |  "reset);
    printf(BGRN"| |_| | "reset);

    cord(46,10);
    printf(BBLU" |____/"reset);
    printf(BWHT"  |___|  "reset);
    printf(BGRN"\\___/  "reset);



    //diu section 1
    cord(5,14);
    printf(CYN"%c",218);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(5,15);
    printf("%c"reset,179);
    printf("  Admissions ");
    cord(5,16);
    printf(CYN"%c",192);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(20,15);
    printf("%c"reset,179);


    //diu section 2
    cord(21,14);
    printf(CYN"%c",218);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(21,15);
    printf("%c"reset,179);
    printf("   Academics ");
    cord(21,16);
    printf(CYN"%c",192);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(36,15);
    printf("%c"reset,179);

    //diu section 3
    cord(37,14);
    printf(CYN"%c",218);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(37,15);
    printf("%c"reset,179);
    printf("    Campus ");
    cord(37,16);
    printf(CYN"%c",192);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(52,15);
    printf("%c"reset,179);

    //diu section 4
    cord(53,14);
    printf(CYN"%c",218);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(53,15);
    printf("%c"reset,179);
    printf("   Research ");
    cord(53,16);
    printf(CYN"%c",192);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(68,15);
    printf("%c"reset,179);


    //diu section 5
    cord(69,14);
    printf(CYN"%c",218);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(69,15);
    printf("%c"reset,179);
    printf(" International");
    cord(69,16);
    printf(CYN"%c",192);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(85,15);
    printf("%c"reset,179);

    //diu section 6
    cord(86,14);
    printf(CYN"%c",218);
    for(int i = 0; i<13; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(86,15);
    printf("%c"reset,179);
    printf("  Help Desk");
    cord(86,16);
    printf(CYN"%c",192);
    for(int i = 0; i<13; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(100,15);
    printf("%c"reset,179);

    //diu section 7
    cord(101,14);
    printf(CYN"%c",218);
    for(int i = 0; i<13; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(101,15);
    printf("%c"reset,179);
    printf("   About");
    cord(101,16);
    printf(CYN"%c",192);
    for(int i = 0; i<13; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(115,15);
    printf("%c"reset,179);


    //text
    cord(7,19);
    printf("Welcome to Daffodil International University (DIU),a place where innovation, excellence, and global");
    cord(7,20);
    printf("perspectives meet. Our commitment to providing world-class education, state-of-the-art facilities, and ");
    cord(7,21);
    printf("a vibrant campus life empowers students to thrive in an ever-evolving world. Join us in shaping the leaders ");
    cord(7,22);
    printf("of tomorrow, today.");

    //menu box
    cord(98,25);
    printf(CYN"%c",218);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }

    cord(98,27);
    printf("%c",192);
    for(int i=0; i<15; i++)
    {
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
    printf(BMAG"4."WHT" Menu");

    cord(28,3);
    printf(BWHT"diu.edu.bd"reset);



    //taking choice
    char url[50];
    int choice;
    cord(108,3);
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        goPrev();
        break;
    case 2:
        goFrwd();
        break;
    case 3:
        searchPage(url);
        if(strcmp(url,"home")==0)
        {
            homePage();
        }
        else if(strcmp(url,"diu.edu.bd")==0)               // insert func er kaaj baki ekhane
        {
             insert("DIU",url);
            diu();
        }
        else if(strcmp(url,"elearn.daffodilvarsity.edu.bd")==0)
        {
            insert("BLC",url);
            blc();
        }
        else if(strcmp(url,"codeforces.com")==0)
        {
            insert("CodeForces",url);
            cf();
        }
        else if(strcmp(url,"facebook.com")==0)
        {
            insert("Facebook",url);
            fb();
        }
        else if(strcmp(url,"youtube.com")==0)
        {
            insert("Youtube",url);
            yt();
        }
        else if(strcmp(url,"x.com")==0)
        {
            insert("X",url);
            x();
        }
        else if(strcmp(url,"gmail.com")==0)
        {
            insert("Gmail",url);
            gmail();
        }
        else
        {
            error_p();
            break;
        }
        break;
    case 4:
        menuPage();
        break;

    default:
        system("cls");
        error();

    }


}

void cf() //done
{
    system("cls");
    box();
    //Prev box
    cord(5,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(5,3);
    printf("%c"reset,179);
    printf(BMAG"1."WHT"Prev");
    cord(5,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(12,3);
    printf("%c"reset,179);

    //Next box
    cord(13,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(13,3);
    printf("%c"reset,179);
    printf(BMAG"2."WHT"Next");
    cord(13,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(20,3);
    printf("%c"reset,179);

    //Url box
    cord(21,2);
    printf(CYN"%c",218);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(21,3);
    printf("%c"reset,179);
    printf(" URL: ");
    cord(21,4);
    printf(CYN"%c",192);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(78,3);
    printf("%c"reset,179);


   //Search box
    cord(79,2);
    printf(CYN"%c",218);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(79,3);
    printf("%c"reset,179);
    printf(BMAG"3. "WHT"Search ");
    cord(79,4);
    printf(CYN"%c",192);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(97,3);
    printf("%c"reset,179);


    //Choice box
    cord(98,2);
    printf(CYN"%c",218);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(98,3);
    printf("%c"reset,179);
    printf(" Choice: ");
    cord(98,4);
    printf(CYN"%c",192);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(115,3);
    printf("%c"reset,179);


    //logo
    cord(5,5);
    printf(BYEL"   _____          _     "BRED" ______                      ");
    cord(5,6);
    printf(BYEL"  / ____|        | |    "BRED"|  ____|                     ");
    cord(5,7);
    printf(BYEL" | |     ___   __| | ___"BRED"| |__ ___  _ __ ___ ___  ___ ");
    cord(5,8);
    printf(BYEL" | |    / _ \\ / _` |/ _ \\"BRED"  __/ _ \\| '__/ __/ _ \\/ __|");
    cord(5,9);
    printf(BYEL" | |___| (_) | (_| |  __/"BRED" | | (_) | | | (_|  __/\\__ \\");
    cord(5,10);
    printf(BYEL"  \\_____\\___/ \\__,_|\\___"BRED"|_|  \\___/|_|  \\___\\___||___/"reset);



    //enter & register
    cord(95,6);
    printf(UWHT"Enter"WHT" | "UWHT"Register");


    //cf section 1
    cord(5,13);
    printf(CYN"%c",218);
    for(int i = 0; i<8; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(5,14);
    printf("%c"reset,179);
    printf("  Home ");
    cord(5,15);
    printf(CYN"%c",192);
    for(int i = 0; i<8; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(14,14);
    printf("%c"reset,179);

    //cf section 2
    cord(15,13);
    printf(CYN"%c",218);
    for(int i = 0; i<7; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(15,14);
    printf("%c"reset,179);
    printf("  TOP ");
    cord(15,15);
    printf(CYN"%c",192);
    for(int i = 0; i<7; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(23,14);
    printf("%c"reset,179);

    //cf section 3
    cord(24,13);
    printf(CYN"%c",218);
    for(int i = 0; i<9; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(24,14);
    printf("%c"reset,179);
    printf(" Catalog");
    cord(24,15);
    printf(CYN"%c",192);
    for(int i = 0; i<9; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(34,14);
    printf("%c"reset,179);


    //cf section 4
    cord(35,13);
    printf(CYN"%c",218);
    for(int i = 0; i<10; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(35,14);
    printf("%c"reset,179);
    printf(" Contests");
    cord(35,15);
    printf(CYN"%c",192);
    for(int i = 0; i<10; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(46,14);
    printf("%c"reset,179);

    //cf section 5
    cord(47,13);
    printf(CYN"%c",218);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(47,14);
    printf("%c"reset,179);
    printf(" Problem Set");
    cord(47,15);
    printf(CYN"%c",192);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(62,14);
    printf("%c"reset,179);

    //cf section 6
    cord(63,13);
    printf(CYN"%c",218);
    for(int i = 0; i<7; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(63,14);
    printf("%c"reset,179);
    printf(" Help");
    cord(63,15);
    printf(CYN"%c",192);
    for(int i = 0; i<7; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(71,14);
    printf("%c"reset,179);


    //ranking  box
    cord(79,8);
    printf(CYN"%c",218);
    for(int i = 0; i<35; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(79,9);
    printf("%c",179);
    cord(79,10);
    printf("%c",179);
    cord(79,11);
    printf("%c",179);
    cord(79,12);
    printf("%c",179);
    cord(79,13);
    printf("%c",179);
    cord(79,14);
    printf("%c",179);
    cord(79,15);
    printf("%c",179);
    cord(79,16);
    printf("%c",179);
    cord(79,17);
    printf("%c",179);
    cord(79,18);
    printf("%c",179);
    cord(79,19);
    printf("%c",179);
    cord(79,20);
    printf("%c",179);
    cord(79,21);
    printf("%c",179);
    cord(79,22);
    printf("%c",179);

    cord(79,23);
    printf(CYN"%c",192);
    for(int i = 0; i<35; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);

    cord(115,9);
    printf("%c",179);
    cord(115,10);
    printf("%c",179);
    cord(115,11);
    printf("%c",179);
    cord(115,12);
    printf("%c",179);
    cord(115,13);
    printf("%c",179);
    cord(115,14);
    printf("%c",179);
    cord(115,15);
    printf("%c",179);
    cord(115,16);
    printf("%c",179);
    cord(115,17);
    printf("%c",179);
    cord(115,18);
    printf("%c",179);
    cord(115,19);
    printf("%c",179);
    cord(115,20);
    printf("%c",179);
    cord(115,21);
    printf("%c",179);
    cord(115,22);
    printf("%c"reset,179);


    //ranking list

    cord(80,9);
    printf(MAG"  #          User         Rating"reset);
    cord(80,11);
    printf("  1         "RED"tourist"reset"       3892");
    cord(80,13);
    printf("  2         "RED"jiangly"reset"       3797");
    cord(80,15);
    printf("  3       "RED"orzdevinwang"reset"    3706");
    cord(80,17);
    printf("  4        "RED"jqdai0815"reset"      3682");
    cord(80,19);
    printf("  5         "RED"ksun48"reset"        3588");
    cord(80,21);
    printf("  6        "RED"ecnerwala"reset"      3557");


    cord(7,19);
    printf("Codeforces is a leading competitive programming platform that brings");
    cord(7,20);
    printf("together programmers fromaround the world to test their ");
    cord(7,21);
    printf("problem-solving skills. With regular contests, a vast problem archive, ");
    cord(7,22);
    printf("and an active community, it is the go-to destination for coding ");
    cord(7,23);
    printf("enthusiasts aiming to sharpen their algorithms and data structures");
    cord(7,24);
    printf("expertise.");

    //menu box
    cord(98,25);
    printf(CYN"%c",218);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }

    cord(98,27);
    printf("%c",192);
    for(int i=0; i<15; i++)
    {
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
    printf(BMAG"4."WHT" Menu");

    cord(28,3);
    printf(BWHT"codeforces.com"reset);


    //taking choice
    char url[50];
    int choice;
    cord(108,3);
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        goPrev();
        break;
    case 2:
        goFrwd();
        break;
    case 3:
        searchPage(url);
        if(strcmp(url,"home")==0)
        {
            homePage();
        }
        else if(strcmp(url,"diu.edu.bd")==0)               // insert func er kaaj baki ekhane
        {
             insert("DIU",url);
            diu();
        }
        else if(strcmp(url,"elearn.daffodilvarsity.edu.bd")==0)
        {
            insert("BLC",url);
            blc();
        }
        else if(strcmp(url,"codeforces.com")==0)
        {
            insert("CodeForces",url);
            cf();
        }
        else if(strcmp(url,"facebook.com")==0)
        {
            insert("Facebook",url);
            fb();
        }
        else if(strcmp(url,"youtube.com")==0)
        {
            insert("Youtube",url);
            yt();
        }
        else if(strcmp(url,"x.com")==0)
        {
            insert("X",url);
            x();
        }
        else if(strcmp(url,"gmail.com")==0)
        {
            insert("Gmail",url);
            gmail();
        }
        else
        {
            error_p();
            break;
        }
        break;
    case 4:
        menuPage();
        break;

    default:
        system("cls");
        error();

    }


}

void blc() //done
{


    system("cls");
    box();

    //Prev box
    cord(5,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(5,3);
    printf("%c"reset,179);
    printf(BMAG"1."WHT"Prev");
    cord(5,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(12,3);
    printf("%c"reset,179);

    //Next box
    cord(13,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(13,3);
    printf("%c"reset,179);
    printf(BMAG"2."WHT"Next");
    cord(13,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(20,3);
    printf("%c"reset,179);

    //Url box
    cord(21,2);
    printf(CYN"%c",218);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(21,3);
    printf("%c"reset,179);
    printf(" URL: ");
    cord(21,4);
    printf(CYN"%c",192);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(78,3);
    printf("%c"reset,179);


   //Search box
    cord(79,2);
    printf(CYN"%c",218);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(79,3);
    printf("%c"reset,179);
    printf(BMAG"3. "WHT"Search ");
    cord(79,4);
    printf(CYN"%c",192);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(97,3);
    printf("%c"reset,179);


    //Choice box
    cord(98,2);
    printf(CYN"%c",218);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(98,3);
    printf("%c"reset,179);
    printf(" Choice: ");
    cord(98,4);
    printf(CYN"%c",192);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(115,3);
    printf("%c"reset,179);



    //logo
    cord(5,5);
    printf(BGRN"  _____ _____ _    _ "BBLU" ____  _      _____ \n");
    cord(5,6);
    printf(BGRN" |  __ \\_   _| |  | |"BBLU"|  _ \\| |    / ____|\n");
    cord(5,7);
    printf(BGRN" | |  | || | | |  | |"BBLU"| |_) | |   | |     \n");
    cord(5,8);
    printf(BGRN" | |  | || | | |  | |"BBLU"|  _ <| |   | |     \n");
    cord(5,9);
    printf(BGRN" | |__| || |_| |__| |"BBLU"| |_) | |___| |____ \n");
    cord(5,10);
    printf(BGRN" |_____/_____\\_____/"BBLU" |____/|______\\_____|\n");



    //blc section 1
    cord(6,12);
    printf(CYN"%c",218);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(6,13);
    printf("%c"reset,179);
    printf("      Home ");
    cord(6,14);
    printf(CYN"%c",192);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(22,13);
    printf("%c"reset,179);


    //blc section 2
    cord(6,15);
    printf(CYN"%c",218);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(6,16);
    printf("%c"reset,179);
    printf("   Dashboard");
    cord(6,17);
    printf(CYN"%c",192);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(22,16);
    printf("%c"reset,179);


    //blc section 3
    cord(6,18);
    printf(CYN"%c",218);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(6,19);
    printf("%c"reset,179);
    printf("  My courses");
    cord(6,20);
    printf(CYN"%c",192);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(22,19);
    printf("%c"reset,179);


    //blc section 4
    cord(6,21);
    printf(CYN"%c",218);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(6,22);
    printf("%c"reset,179);
    printf("   Guidlines");
    cord(6,23);
    printf(CYN"%c",192);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(22,22);
    printf("%c"reset,179);


    //blc recent
    cord(60,6);
    printf(CYN"%c",218);
    for(int i = 0; i<11; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(60,7);
    printf("%c"reset,179);
    cord(63,7);
    printf(UWHT"Recent"reset);
    cord(60,8);
    printf(CYN"%c",192);
    for(int i = 0; i<11; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(72,7);
    printf("%c"reset,179);


    //blc search
    cord(74,6);
    printf(CYN"%c",218);
    for(int i = 0; i<20; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(74,7);
    printf("%c"reset,179);
    printf(" BLC Search:");
    cord(74,8);
    printf(CYN"%c",192);
    for(int i = 0; i<20; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(95,7);
    printf("%c"reset,179);


    //blc Profile
    cord(97,6);
    printf(CYN"%c",218);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(97,7);
    printf("%c"reset,179);
    cord(102,7);
    printf(UWHT"Profile"reset);
    cord(97,8);
    printf(CYN"%c",192);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(114,7);
    printf("%c"reset,179);



    //Welcome box
    cord(28,12);
    printf(CYN"%c",218);
    for(int i = 0; i<85; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);

    cord(28,13);
    printf("%c",179);
    cord(28,14);
    printf("%c",179);
    cord(28,15);
    printf("%c",179);
    cord(28,16);
    printf("%c",179);
    cord(28,17);
    printf("%c",179);
    cord(28,18);
    printf("%c",179);
    cord(28,19);
    printf("%c",179);
    cord(28,20);
    printf("%c",179);
    cord(28,21);
    printf("%c",179);
    cord(28,22);
    printf("%c",179);

    cord(28,23);
    printf("%c",192);
    for(int i = 0; i<85; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);

    cord(114,13);
    printf("%c",179);
    cord(114,14);
    printf("%c",179);
    cord(114,15);
    printf("%c",179);
    cord(114,16);
    printf("%c",179);
    cord(114,17);
    printf("%c",179);
    cord(114,18);
    printf("%c",179);
    cord(114,19);
    printf("%c",179);
    cord(114,20);
    printf("%c",179);
    cord(114,21);
    printf("%c",179);

    cord(114,22);
    printf("%c"reset,179);


    //some text
    cord(34,14);
    printf("Welcome to DIU Blending Learning Center.");
    cord(34,17);
    printf("Blended Learning Center is the digital teaching and learninghub of Daffodil");
    cord(34,18);
    printf("International University. The platform aims to connect teachers and students");
    cord(34,19);
    printf("aims to connect teachers and students effectively allowing teachers to track");
    cord(34,20);
    printf("progress of individual students and better facilitate their learning.");

    //menu box
    cord(98,25);
    printf(CYN"%c",218);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }

    cord(98,27);
    printf("%c",192);
    for(int i=0; i<15; i++)
    {
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
    printf(BMAG"4."WHT" Menu");

    cord(28,3);
    printf(BWHT"elearn.daffodilvarsity.edu.bd"reset);


    //taking choice
    char url[50];
    int choice;
    cord(108,3);
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        goPrev();
        break;
    case 2:
        goFrwd();
        break;
    case 3:
        searchPage(url);
        if(strcmp(url,"home")==0)
        {
            homePage();
        }
        else if(strcmp(url,"diu.edu.bd")==0)               // insert func er kaaj baki ekhane
        {
             insert("DIU",url);
            diu();
        }
        else if(strcmp(url,"elearn.daffodilvarsity.edu.bd")==0)
        {
            insert("BLC",url);
            blc();
        }
        else if(strcmp(url,"codeforces.com")==0)
        {
            insert("CodeForces",url);
            cf();
        }
        else if(strcmp(url,"facebook.com")==0)
        {
            insert("Facebook",url);
            fb();
        }
        else if(strcmp(url,"youtube.com")==0)
        {
            insert("Youtube",url);
            yt();
        }
        else if(strcmp(url,"x.com")==0)
        {
            insert("X",url);
            x();
        }
        else if(strcmp(url,"gmail.com")==0)
        {
            insert("Gmail",url);
            gmail();
        }
        else
        {
            error_p();
            break;
        }
        break;
    case 4:
        menuPage();
        break;

    default:
        system("cls");
        error();

    }


}

void error_p()
{
    system("cls");
    box();
    cord(30,5);
    printf(RED"  ______                        _  _    ___  _  _     _  ");
    cord(30,6);
    printf(" |  ____|                      | || |  / _ \\| || |   | | ");
    cord(30,7);
    printf(" | |__   _ __ _ __ ___  _ __   | || |_| | | | || |_  | | ");
    cord(30,8);
    printf(" |  __| | '__| '__/ _ \\| '__|  |__   _| | | |__   _| | | ");
    cord(30,9);
    printf(" | |____| |  | | | (_) | |        | | | |_| |  | |   |_| ");
    cord(30,10);
    printf(" |______|_|  |_|  \\___/|_|        |_|  \\___/   |_|   (_) "reset);

    cord(35,15);
    printf(BRED"Our Budget is not Enough to Show You This Page");
    cord(57,17);
    printf(":("reset);

}

void error()
{
    system("cls");
    box();
    cord(30,5);
    printf(RED"  ______                        _  _    ___  _  _     _  ");
    cord(30,6);
    printf(" |  ____|                      | || |  / _ \\| || |   | | ");
    cord(30,7);
    printf(" | |__   _ __ _ __ ___  _ __   | || |_| | | | || |_  | | ");
    cord(30,8);
    printf(" |  __| | '__| '__/ _ \\| '__|  |__   _| | | |__   _| | | ");
    cord(30,9);
    printf(" | |____| |  | | | (_) | |        | | | |_| |  | |   |_| ");
    cord(30,10);
    printf(" |______|_|  |_|  \\___/|_|        |_|  \\___/   |_|   (_) "reset);

    cord(48,15);
    printf(BRED"Enter the Right Option");
    cord(57,17);
    printf("-_-"reset);

}

void fb() //done
{
    system("cls");
    box();

    //Prev box
    cord(5,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(5,3);
    printf("%c"reset,179);
    printf(BMAG"1."WHT"Prev");
    cord(5,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(12,3);
    printf("%c"reset,179);

    //Next box
    cord(13,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(13,3);
    printf("%c"reset,179);
    printf(BMAG"2."WHT"Next");
    cord(13,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(20,3);
    printf("%c"reset,179);

    //Url box
    cord(21,2);
    printf(CYN"%c",218);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(21,3);
    printf("%c"reset,179);
    printf(" URL: facebook.com");
    cord(21,4);
    printf(CYN"%c",192);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(78,3);
    printf("%c"reset,179);


   //Search box
    cord(79,2);
    printf(CYN"%c",218);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(79,3);
    printf("%c"reset,179);
    printf(BMAG"3."WHT"Search");
    cord(79,4);
    printf(CYN"%c",192);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(97,3);
    printf("%c"reset,179);


    //Choice box
    cord(98,2);
    printf(CYN"%c",218);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(98,3);
    printf("%c"reset,179);
    printf(" Choice: ");
    cord(98,4);
    printf(CYN"%c",192);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(115,3);
    printf("%c"reset,179);

    //logo
    cord(8,6);
    printf(BBLU"   __  ");
    cord(8,7);
    printf("  / _| ");
    cord(8,8);
    printf(" | |_  ");
    cord(8,9);
    printf(" |  _| ");
    cord(8,10);
    printf(" | |   ");
    cord(8,11);
    printf(" |_|   "reset);


    //fb search
    cord(30,6);
    printf(BBLU"%c",218);
    for(int i = 0; i<51; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(30,7);
    printf("%c"reset,179);
    cord(32,7);
    printf("Search Facebook:");
    cord(30,8);
    printf(BBLU"%c",192);
    for(int i = 0; i<51; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(82,7);
    printf("%c"reset,179);


    //fb Home
    cord(20,9);
    printf(BBLU"%c",218);
    for(int i = 0; i<7; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(20,10);
    printf("%c"reset,179);
    cord(23,10);
    printf("Home");
    cord(20,11);
    printf(BBLU"%c",192);
    for(int i = 0; i<7; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(28,10);
    printf("%c"reset,179);


    //fb Profile
    cord(30,9);
    printf(BBLU"%c",218);
    for(int i = 0; i<9; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(30,10);
    printf("%c"reset,179);
    cord(32,10);
    printf("Profile");
    cord(30,11);
    printf(BBLU"%c",192);
    for(int i = 0; i<9; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(40,10);
    printf("%c"reset,179);


    //fb Messages
    cord(42,9);
    printf(BBLU"%c",218);
    for(int i = 0; i<10; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(42,10);
    printf("%c"reset,179);
    cord(44,10);
    printf("Messages");
    cord(42,11);
    printf(BBLU"%c",192);
    for(int i = 0; i<10; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(53,10);
    printf("%c"reset,179);


    //fb notifications
    cord(55,9);
    printf(BBLU"%c",218);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(55,10);
    printf("%c"reset,179);
    cord(57,10);
    printf("Notifications");
    cord(55,11);
    printf(BBLU"%c",192);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(71,10);
    printf("%c"reset,179);


    //fb Chat
    cord(73,9);
    printf(BBLU"%c",218);
    for(int i = 0; i<7; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(73,10);
    printf("%c"reset,179);
    cord(75,10);
    printf("Chat");
    cord(73,11);
    printf(BBLU"%c",192);
    for(int i = 0; i<7; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(81,10);
    printf("%c"reset,179);



    //fb friends
    cord(83,9);
    printf(BBLU"%c",218);
    for(int i = 0; i<10; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(83,10);
    printf("%c"reset,179);
    cord(85,10);
    printf("Friends");
    cord(83,11);
    printf(BBLU"%c",192);
    for(int i = 0; i<10; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(94,10);
    printf("%c"reset,179);



    //post section
    cord(10,15);
    printf(WHTB"%c",218);
    for(int i = 0; i<75; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(10,16);
    printf("%c",179);
    cord(10,17);
    printf("%c",192);

    for(int i = 0; i<75; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);

    cord(11,16);
    for(int i = 0; i<75; i++)
    {
        printf("%c",179);
    }

    cord(86,16);
    printf("%c"reset,179);

    cord(12,16);
    printf(BBLK WHTB"What's on your mind?"reset);


    //post
    cord(88,15);
    printf(BBLU"%c",218);
    for(int i = 0; i<10; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(88,16);
    printf("%c",179);
    cord(88,17);
    printf(BBLU"%c",192);
    for(int i = 0; i<10; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(99,16);
    printf("%c"reset,179);

    cord(91,16);
    printf("Post");



    //posting blog
    cord(10,19);
    printf(BWHT"%c",218);
    for(int i = 0; i<85; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);

    cord(10,20);
    printf("%c",179);
    cord(10,21);
    printf("%c",179);
    cord(10,22);
    printf("%c",179);
    cord(10,23);
    printf("%c",179);
    cord(10,24);
    printf("%c",179);


    cord(10,25);
    printf("%c",192);

    for(int i = 0; i<85; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);


    cord(96,20);
    printf("%c",179);
    cord(96,21);
    printf("%c",179);
    cord(96,22);
    printf("%c",179);
    cord(96,23);
    printf("%c",179);
    cord(96,24);
    printf("%c"reset,179);


    cord(12,20);
    printf(BWHT"Daffodil International University"reset);
    cord(12,22);
    printf("Welcome to all the fresher of Spring 2025.");





    //menu box
    cord(98,25);
    printf(CYN"%c",218);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }

    cord(98,27);
    printf("%c",192);
    for(int i=0; i<15; i++)
    {
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
    printf(BMAG"4."WHT" Menu");


    //taking choice
    char url[50];
    int choice;
    cord(108,3);
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        goPrev();
        break;
    case 2:
        goFrwd();
        break;
    case 3:
        searchPage(url);
        if(strcmp(url,"home")==0)
        {
            homePage();
        }
        else if(strcmp(url,"diu.edu.bd")==0)               // insert func er kaaj baki ekhane
        {
             insert("DIU",url);
            diu();
        }
        else if(strcmp(url,"elearn.daffodilvarsity.edu.bd")==0)
        {
            insert("BLC",url);
            blc();
        }
        else if(strcmp(url,"codeforces.com")==0)
        {
            insert("CodeForces",url);
            cf();
        }
        else if(strcmp(url,"facebook.com")==0)
        {
            insert("Facebook",url);
            fb();
        }
        else if(strcmp(url,"youtube.com")==0)
        {
            insert("Youtube",url);
            yt();
        }
        else if(strcmp(url,"x.com")==0)
        {
            insert("X",url);
            x();
        }
        else if(strcmp(url,"gmail.com")==0)
        {
            insert("Gmail",url);
            gmail();
        }
        else
        {
            error_p();
            break;
        }
        break;
    case 4:
        menuPage();
        break;

    default:
        system("cls");
        error();

    }


}

void gmail() //done
{
    system("cls");
    box();
    //Prev box
    cord(5,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(5,3);
    printf("%c"reset,179);
    printf(BMAG"1."WHT"Prev ");
    cord(5,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(12,3);
    printf("%c"reset,179);

    //Next box
    cord(13,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(13,3);
    printf("%c"reset,179);
    printf(BMAG"2."WHT"Next");
    cord(13,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(20,3);
    printf("%c"reset,179);

    //Url box
    cord(21,2);
    printf(CYN"%c",218);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(21,3);
    printf("%c"reset,179);
    printf(" URL: ");
    cord(21,4);
    printf(CYN"%c",192);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(78,3);
    printf("%c"reset,179);


   //Search box
    cord(79,2);
    printf(CYN"%c",218);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(79,3);
    printf("%c"reset,179);
    printf(BMAG"3. "WHT"Search ");
    cord(79,4);
    printf(CYN"%c",192);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(97,3);
    printf("%c"reset,179);


    //Choice box
    cord(98,2);
    printf(CYN"%c",218);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(98,3);
    printf("%c"reset,179);
    printf(" Choice: ");
    cord(98,4);
    printf(CYN"%c",192);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(115,3);
    printf("%c"reset,179);


    //logo
    cord(5,5);
    printf(BBLU"   _____                   _"BGRN"  _ ");
    cord(5,6);
    printf(BBLU"  / ____|                 (_)"BGRN"| |");
    cord(5,7);
    printf(BBLU" | |  __"BRED"  _ __ ___  "BYEL" __ _"BBLU"  _"BGRN" | |");
    cord(5,8);
    printf(BBLU" | | |_ |"BRED"| '_ ` _ \\ "BYEL"/ _` |"BBLU"| |"BGRN"| |");
    cord(5,9);
    printf(BBLU" | |__| |"BRED"| | | | | | "BYEL"(_| |"BBLU"| |"BGRN"| |");
    cord(5,10);
    printf(BBLU"  \\_____|"BRED"|_| |_| |_|"BYEL"\\__,_|"BBLU"|_|"BGRN"|_|");

    //search
    cord(43,7);
    printf(BYEL"%c",218);
    for(int i = 0; i<70; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(43,8);
    printf("%c"reset,179);
    printf("Search email:");
    cord(43,9);
    printf(BYEL"%c",192);
    for(int i = 0; i<70; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(114,8);
    printf("%c"reset,179);

    //text
    cord(7,12);
    printf( WHTB BBLK"    Inbox    "reset);

    cord(26,12);
    printf("Starred");
    cord(48,12);
    printf("Sent");
    cord(67,12);
    printf("Drafts");
    cord(89,12);
    printf("Spam");
    cord(105,12);
    printf("Trash");
    cord(8,14);
    printf(BMAG"#"BWHT"   From"reset);
    cord(57,14);
    printf("Subject");
    cord(105,14);
    printf("Time");

    cord(20,12);
    printf(BLU"|");
    cord(40,12);
    printf("|");
    cord(59,12);
    printf("|");
    cord(81,12);
    printf("|");
    cord(99,12);
    printf("|"reset);


    //compose
    cord(6,23);
    printf(BYEL"%c",218);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(6,24);
    printf("%c"reset,179);
    printf("    Compose ");
    cord(6,25);
    printf(BYEL"%c",192);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(22,24);
    printf("%c"reset,179);

    //refresh
    cord(24,23);
    printf(BYEL"%c",218);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(24,24);
    printf("%c"reset,179);
    printf("    Refresh ");
    cord(24,25);
    printf(BYEL"%c",192);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(40,24);
    printf("%c"reset,179);

    //settings
    cord(42,23);
    printf(BYEL"%c",218);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(42,24);
    printf("%c"reset,179);
    printf("   Settings ");
    cord(42,25);
    printf(BYEL"%c",192);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(58,24);
    printf("%c"reset,179);

    //logout
    cord(60,23);
    printf(BRED"%c",218);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(60,24);
    printf("%c"reset,179);
    printf("    Log Out ");
    cord(60,25);
    printf(BRED"%c",192);
    for(int i = 0; i<15; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(76,24);
    printf("%c"reset,179);

    cord(7,15);
    for(int i=0; i<107; i++)
    {
        printf(CYN"-"reset);

    }

    cord(7,17);
    printf(BMAG" 1"BWHT"   Open Ai Support           "BCYN" ChatGPT subscription"BWHT" - Come on , renew me already!!                "BMAG"12m"reset);
    cord(7,19);
    printf(BMAG" 2"BWHT"   DIU Portal                "BCYN" Exam Schedule Update"BWHT" - Exam delayed (Haha , No)                    "BMAG"1h"reset);
    cord(7,21);
    printf(BMAG" 3"BWHT"   Codeforces                "BCYN" Contest anouncement"BWHT" - New Contest: You will cry:))                 "BMAG"3h"reset);



    // box
    cord(6,13);
    printf(BLU"%c",218);
    for(int i = 0; i<107; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);

    cord(6,14);
    printf("%c",179);
    cord(6,15);
    printf("%c",179);
    cord(6,16);
    printf("%c",179);
    cord(6,17);
    printf("%c",179);
    cord(6,18);
    printf("%c",179);
    cord(6,19);
    printf("%c",179);
    cord(6,20);
    printf("%c",179);
    cord(6,21);
    printf("%c",179);
    cord(6,22);
    printf("%c",179);

    cord(6,22);
    printf("%c",192);
    for(int i = 0; i<107; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);


    cord(114,14);
    printf("%c",179);
    cord(114,15);
    printf("%c",179);
    cord(114,16);
    printf("%c",179);
    cord(114,17);
    printf("%c",179);
    cord(114,18);
    printf("%c",179);
    cord(114,19);
    printf("%c",179);
    cord(114,20);
    printf("%c",179);



    cord(114,21);
    printf("%c"reset,179);

    //menu box
    cord(98,25);
    printf(CYN"%c",218);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }

    cord(98,27);
    printf("%c",192);
    for(int i=0; i<15; i++)
    {
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
    printf(BMAG"4."WHT" Menu");


    //taking choice
    char url[50];
    int choice;
    cord(108,3);
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        goPrev();
        break;
    case 2:
        goFrwd();
        break;
    case 3:
        searchPage(url);
        if(strcmp(url,"home")==0)
        {
            homePage();
        }
        else if(strcmp(url,"diu.edu.bd")==0)               // insert func er kaaj baki ekhane
        {
             insert("DIU",url);
            diu();
        }
        else if(strcmp(url,"elearn.daffodilvarsity.edu.bd")==0)
        {
            insert("BLC",url);
            blc();
        }
        else if(strcmp(url,"codeforces.com")==0)
        {
            insert("CodeForces",url);
            cf();
        }
        else if(strcmp(url,"facebook.com")==0)
        {
            insert("Facebook",url);
            fb();
        }
        else if(strcmp(url,"youtube.com")==0)
        {
            insert("Youtube",url);
            yt();
        }
        else if(strcmp(url,"x.com")==0)
        {
            insert("X",url);
            x();
        }
        else if(strcmp(url,"gmail.com")==0)
        {
            insert("Gmail",url);
            gmail();
        }
        else
        {
            error_p();
            break;
        }
        break;
    case 4:
        menuPage();
        break;

    default:
        system("cls");
        error();

    }


}

void x() //done
{

    system("cls");
    box();
    //Prev box
    cord(5,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(5,3);
    printf("%c"reset,179);
    printf(BMAG"1."WHT"Prev");
    cord(5,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(12,3);
    printf("%c"reset,179);

    //Next box
    cord(13,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(13,3);
    printf("%c"reset,179);
    printf(BMAG"2."WHT"Next");
    cord(13,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(20,3);
    printf("%c"reset,179);

    //Url box
    cord(21,2);
    printf(CYN"%c",218);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(21,3);
    printf("%c"reset,179);
    printf(" URL: ");
    cord(21,4);
    printf(CYN"%c",192);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(78,3);
    printf("%c"reset,179);


    //Search box
    cord(79,2);
    printf(CYN"%c",218);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(79,3);
    printf("%c"reset,179);
    printf(BMAG"3. "WHT"Search");
    cord(79,4);
    printf(CYN"%c",192);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(97,3);
    printf("%c"reset,179);


    //Choice box
    cord(98,2);
    printf(CYN"%c",218);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(98,3);
    printf("%c"reset,179);
    printf(" Choice: ");
    cord(98,4);
    printf(CYN"%c",192);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(115,3);
    printf("%c"reset,179);


    //logo

    cord(7,5);
    printf(" __   __\n");
    cord(7,6);
    printf(" \\ \\ / /\n");
    cord(7,7);
    printf("  \\ \\ / \n");
    cord(7,8);
    printf("   \\ \\  \n");
    cord(7,9);
    printf("  / \\ \\ \n");
    cord(7,10);
    printf(" /_/ \\_\\\n");



    //  Twitter section 1
    cord(5, 13);
    printf(CYN "%c", 218);
    for (int i = 0; i < 14; i++)
    {
        printf("%c", 196);
    }
    printf("%c", 191);

    cord(5, 14);
    printf("%c", 179);
    printf("     Home ");
    cord(20, 14);
    printf("%c" reset, 179);

    cord(5, 15);
    printf(CYN "%c", 192);
    for (int i = 0; i < 14; i++)
    {
        printf("%c", 196);
    }
    printf("%c" reset, 217);

    //  Twitter section 2
    cord(5, 16);
    printf(CYN "%c", 218);
    for (int i = 0; i < 14; i++)
    {
        printf("%c", 196);
    }
    printf("%c", 191);

    cord(5, 17);
    printf("%c", 179);
    printf("Nortifications");
    cord(20, 17);
    printf("%c" reset, 179);

    cord(5, 18);
    printf(CYN "%c", 192);
    for (int i = 0; i < 14; i++)
    {
        printf("%c", 196);
    }
    printf("%c" reset, 217);


    //  Twitter section 3
    cord(5, 19);
    printf(CYN "%c", 218);
    for (int i = 0; i < 14; i++)
    {
        printf("%c", 196);
    }
    printf("%c", 191);

    cord(5, 20);
    printf("%c", 179);
    printf("    Lists  ");
    cord(20, 20);
    printf("%c" reset, 179);

    cord(5, 21);
    printf(CYN "%c", 192);
    for (int i = 0; i < 14; i++)
    {
        printf("%c", 196);
    }
    printf("%c" reset, 217);


    //  Twitter section 4
    cord(5, 22);
    printf(CYN "%c", 218);
    for (int i = 0; i < 14; i++)
    {
        printf("%c", 196);
    }
    printf("%c", 191);

    cord(5, 23);
    printf("%c", 179);
    printf("   Profile  ");
    cord(20, 23);
    printf("%c" reset, 179);

    cord(5, 24);
    printf(CYN "%c", 192);
    for (int i = 0; i < 14; i++)
    {
        printf("%c", 196);
    }
    printf("%c" reset, 217);

    //search twitter
    cord(79,5);
    printf(CYN"%c",218);
    for(int i = 0; i<35; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(79,6);
    printf("%c"reset,179);
    printf(" Search Twitter ");
    cord(79,7);
    printf(CYN"%c",192);
    for(int i = 0; i<35; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(115,6);
    printf("%c"reset,179);


    //Trends for you
    cord(79,8);
    printf(" Trends for you ");

    //breaking news 1
    cord(79,9);
    printf(CYN"%c",218);
    for(int i = 0; i<35; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(79,10);
    printf("%c"reset,179);
    printf(" # Breaking News ");
    cord(79,11);
    printf(CYN"%c",192);
    for(int i = 0; i<35; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(115,10);
    printf("%c"reset,179);

    //twitt 1

    cord(79,11);
    printf(CYN"%c"reset,179);
    cord(79,12);
    printf(CYN"%c"reset,179);
    cord(79,13);
    printf(CYN"%c"reset,179);
    cord(79,14);
    printf(CYN"%c"reset,179);
    cord(79,15);
    printf(CYN"%c"reset,179);

    cord(79,16);
    printf(CYN"%c"reset,192);
    for(int i = 0; i<35; i++)
    {
        printf(CYN"%c"reset,196);
    }

    cord(80,12);
    printf("Teacher: Where is your homework?");
    cord(80,13);
    printf("Me: It is still loading...slow WiFi");
    cord(80,14);
    printf("    at my brain.");


    cord(115,16);
    printf(CYN"%c"reset,217);

    cord(115,11);
    printf(CYN"%c"reset,179);
    cord(115,12);
    printf(CYN"%c"reset,179);
    cord(115,13);
    printf(CYN"%c"reset,179);
    cord(115,14);
    printf(CYN"%c"reset,179);
    cord(115,15);
    printf(CYN"%c"reset,179);



    //breaking news 2
    cord(79,17);
    printf(CYN"%c",218);
    for(int i = 0; i<35; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(79,18);
    printf("%c"reset,179);
    printf(" # Breaking News ");
    cord(79,19);
    printf(CYN"%c",192);
    for(int i = 0; i<35; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(115,18);
    printf("%c"reset,179);
    //twitt

    cord(79,19);
    printf(CYN"%c"reset,179);
    cord(79,20);
    printf(CYN"%c"reset,179);
    cord(79,21);
    printf(CYN"%c"reset,179);
    cord(79,22);
    printf(CYN"%c"reset,179);
    cord(79,23);
    printf(CYN"%c"reset,179);

    cord(79,24);
    printf(CYN"%c"reset,192);
    for(int i = 0; i<35; i++)
    {
        printf(CYN"%c"reset,196);
    }

    cord(80,20);
    printf("CSE stands for -Can't Sleep Easily.");

    cord(80,21);
    printf("Because debugging at 3 AM is a");

    cord(80,22);
    printf("lifestyle.");


    cord(115,24);
    printf(CYN"%c"reset,217);

    cord(115,19);
    printf(CYN"%c"reset,179);
    cord(115,20);
    printf(CYN"%c"reset,179);
    cord(115,21);
    printf(CYN"%c"reset,179);
    cord(115,22);
    printf(CYN"%c"reset,179);
    cord(115,23);
    printf(CYN"%c"reset,179);

    //Menu
    cord(98,25);
    printf(CYN"%c",218);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }

    cord(98,27);
    printf("%c",192);
    for(int i=0; i<15; i++)
    {
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
    printf(BMAG"4."WHT" Menu");

    //Whats happening
    cord(21,5);
    printf(CYN"%c",218);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);

    cord(21,6);
    printf(CYN"%c"reset,179);
    cord(21,7);
    printf(CYN"%c"reset,179);
    cord(21,8);
    printf(CYN"%c"reset,179);
    cord(21,9);
    printf(CYN"%c"reset,179);
    cord(21,10);
    printf(CYN"%c"reset,179);

    cord(25,8);
    printf(" %c%c Whats happening? ",219,219);
    cord(21,11);
    printf(CYN"%c",192);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(78,6);
    printf(CYN"%c"reset,179);
    cord(78,7);
    printf(CYN"%c"reset,179);
    cord(78,8);
    printf(CYN"%c"reset,179);
    cord(78,9);
    printf(CYN"%c"reset,179);
    cord(78,10);
    printf(CYN"%c"reset,179);

    //Twitt box
    cord(61,8);
    printf(CYN"%c",218);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }

    cord(61,9);
    printf("%c",179);

    cord(76,8);
    printf("%c",191);

    cord(61,10);
    printf("%c",192);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }
    cord(76,10);
    printf("%c",217);

    cord(76,9);
    printf("%c",179);

    cord(62,9);
    printf("    TWEET");


    //post 1

    cord(21,12);
    printf(CYN"%c",218);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);

    cord(21,13);
    printf(CYN"%c"reset,179);
    cord(21,14);
    printf(CYN"%c"reset,179);
    cord(21,15);
    printf(CYN"%c"reset,179);
    cord(21,16);
    printf(CYN"%c"reset,179);



    cord(21,17);
    printf(CYN"%c",192);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(78,13);
    printf(CYN"%c"reset,179);
    cord(78,14);
    printf(CYN"%c"reset,179);
    cord(78,15);
    printf(CYN"%c"reset,179);
    cord(78,16);
    printf(CYN"%c"reset,179);

    cord(25,13);
    printf(" %c%c BRIO @sktch_ComedyFun %c 3m \n",219,219,250);
    cord(25,14);
    printf("    Giving standup comedy a go.Open mic starts at 7. \n");
    cord(25,15);
    printf("    Hit me up if you want ticket.#heregostoning");


    //post 2
    cord(21,18);
    printf(CYN"%c",218);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);

    cord(21,19);
    printf(CYN"%c"reset,179);
    cord(21,20);
    printf(CYN"%c"reset,179);
    cord(21,21);
    printf(CYN"%c"reset,179);
    cord(21,22);
    printf(CYN"%c"reset,179);
    cord(21,23);
    printf(CYN"%c"reset,179);
    cord(21,24);
    printf(CYN"%c"reset,179);
    cord(21,25);
    printf(CYN"%c"reset,179);

    cord(78,19);
    printf(CYN"%c"reset,179);
    cord(78,20);
    printf(CYN"%c"reset,179);
    cord(78,21);
    printf(CYN"%c"reset,179);
    cord(78,22);
    printf(CYN"%c"reset,179);
    cord(78,23);
    printf(CYN"%c"reset,179);
    cord(78,24);
    printf(CYN"%c"reset,179);
    cord(78,24);
    printf(CYN"%c"reset,179);
    cord(78,25);
    printf(CYN"%c"reset,179);

    cord(25,19);
    printf(" %c%c BRIO @sktch_ComedyFun %c 3m \n",219,219,250);

    cord(26,21);
    printf(CYN"%c",218);
    for(int i = 0; i<46; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);

    cord(26,22);
    printf(CYN"%c"reset,179);
    cord(26,23);
    printf(CYN"%c"reset,179);
    cord(26,24);
    printf(CYN"%c"reset,179);
    cord(26,25);
    printf(CYN"%c"reset,179);

    cord(73,22);
    printf(CYN"%c"reset,179);
    cord(73,23);
    printf(CYN"%c"reset,179);
    cord(73,24);
    printf(CYN"%c"reset,179);
    cord(73,25);
    printf(CYN"%c"reset,179);

    //img
    cord(28,22);
    printf("%c%c Sunset.jpg",219,219);
    cord(29,23);
    printf("  Sorry we don't have enough budget");
    cord(29,24);
    printf("  to show you the picture...");



    //taking choice
    char url[50];
    int choice;
    cord(108,3);
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        goPrev();
        break;
    case 2:
        goFrwd();
        break;
    case 3:
        searchPage(url);
        if(strcmp(url,"home")==0)
        {
            homePage();
        }
        else if(strcmp(url,"diu.edu.bd")==0)
        {
             insert("DIU",url);
            diu();
        }
        else if(strcmp(url,"elearn.daffodilvarsity.edu.bd")==0)
        {
            insert("BLC",url);
            blc();
        }
        else if(strcmp(url,"codeforces.com")==0)
        {
            insert("CodeForces",url);
            cf();
        }
        else if(strcmp(url,"facebook.com")==0)
        {
            insert("Facebook",url);
            fb();
        }
        else if(strcmp(url,"youtube.com")==0)
        {
            insert("Youtube",url);
            yt();
        }
        else if(strcmp(url,"x.com")==0)
        {
            insert("X",url);
            x();
        }
        else if(strcmp(url,"gmail.com")==0)
        {
            insert("Gmail",url);
            gmail();
        }
        else
        {
            error_p();
            break;
        }
        break;
    case 4:
        menuPage();
        break;

    default:
        system("cls");
        error();

    }


}

void yt() //done
{
    system("cls");
    box();
    //Prev box
    cord(5,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(5,3);
    printf("%c"reset,179);
    printf(BMAG"1."WHT"Prev");
    cord(5,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(12,3);
    printf("%c"reset,179);

    //Next box
    cord(13,2);
    printf(CYN"%c",218);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(13,3);
    printf("%c"reset,179);
    printf(BMAG"2."WHT"Next");
    cord(13,4);
    printf(CYN"%c",192);
    for(int i = 0; i<6; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(20,3);
    printf("%c"reset,179);

    //Url box
    cord(21,2);
    printf(CYN"%c",218);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(21,3);
    printf("%c"reset,179);
    printf(" URL: ");
    cord(21,4);
    printf(CYN"%c",192);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(78,3);
    printf("%c"reset,179);


//Search box
    cord(79,2);
    printf(CYN"%c",218);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(79,3);
    printf("%c"reset,179);
    printf(BMAG"3. "WHT"Search ");
    cord(79,4);
    printf(CYN"%c",192);
    for(int i = 0; i<17; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(97,3);
    printf("%c"reset,179);


    //Choice box
    cord(98,2);
    printf(CYN"%c",218);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(98,3);
    printf("%c"reset,179);
    printf(" Choice: ");
    cord(98,4);
    printf(CYN"%c",192);
    for(int i = 0; i<16; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(115,3);
    printf("%c"reset,179);


    //logo
    cord(6,5);

    printf(" __     __      ");
    printf(RED"_______    _          "reset);


    cord(6,6);
    printf(" \\ \\   / /     ");
    printf(RED"|__   __|  | |         "reset);

    cord(6,7);
    printf("  \\ \\_/ /__  _   _");
    printf(RED"| |_   _| |__   ___ "reset);

    cord(6,8);
    printf("   \\   / _ \\| | | ");
    printf(RED"| | | | | '_ \\ / _ \\"reset);

    cord(6,9);
    printf("    | | (_) | |_| ");
    printf(RED"| | |_| | |_) |  __/"reset);

    cord(6,10);
    printf("    |_|\\___/ \\__,_");
    printf(RED"|_|\\__,_|_.__/ \\___|"reset);

    cord(6,11);
    printf("                                      ");

    //search youtube box
    cord(46,8);
    printf("%c",218);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);

    cord(46,9);
    printf("%c"reset,179);
    printf(" Search YouTube: ");
    cord(46,10);
    printf("%c",192);
    for(int i = 0; i<56; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(103,9);
    printf("%c"reset,179);

    //you tube 1
    cord(6,12);
    printf(RED"%c"reset,218);
    for(int i = 0; i<14; i++)
    {
        printf(RED"%c"reset,196);
    }
    printf(RED"%c"reset,191);
    cord(6,13);
    printf(RED"%c"reset,179);
    printf("     Home   ");
    cord(6,14);
    printf(RED"%c"reset,192);
    for(int i = 0; i<14; i++)
    {
        printf(RED"%c"reset,196);
    }
    printf(RED"%c"reset,217);
    cord(21,13);
    printf(RED"%c"reset,179);

    // section 2
    cord(6,15);
    printf("%c",218);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(6,16);
    printf("%c",179);
    printf("    History ");
    cord(6,17);
    printf("%c",192);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(21,16);
    printf("%c",179);

    // section 3
    cord(6,18);
    printf("%c",218);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(6,19);
    printf("%c",179);
    printf("  Watch Later");
    cord(6,20);
    printf("%c",192);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(21,19);
    printf("%c",179);

    //section 4
    cord(6,21);
    printf("%c",218);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cord(6,22);
    printf("%c",179);
    printf("   Downloads ");
    cord(6,23);
    printf("%c",192);
    for(int i = 0; i<14; i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cord(21,22);
    printf("%c",179);

    //thumbnail 1
    cord(30,12);
    printf("%c",218);
    for(int i = 0; i<25; i++)
    {
        printf("%c"reset,196);
    }

    printf("%c"reset,191);

    cord(31,17);
    printf("%c Data Structure Playlist",219);

    cord(30,13);
    printf("%c"reset,179);
    cord(30,14);
    printf("%c"reset,179);
    cord(30,15);
    printf("%c"reset,179);
    cord(30,16);
    printf("%c"reset,179);
    cord(30,17);
    printf("%c"reset,179);
    cord(30,18);
    printf("%c"reset,179);

    cord(30,18);
    printf("%c",192);
    for(int i = 0; i<25; i++)
    {
        printf("%c"reset,196);
    }
    printf("%c"reset,217);

    cord(56,13);
    printf("%c"reset,179);

    cord(56,14);
    printf("%c"reset,179);
    cord(56,15);
    printf("%c"reset,179);
    cord(56,16);
    printf("%c"reset,179);
    cord(56,17);
    printf("%c"reset,179);


    //thumbnail 2
    cord(30,19);
    printf("%c",218);
    for(int i = 0; i<25; i++)
    {
        printf("%c"reset,196);
    }

    printf("%c"reset,191);

    cord(31,24);
    printf("%c Titanic Full movie",219);


    cord(30,20);
    printf("%c"reset,179);
    cord(30,21);
    printf("%c"reset,179);
    cord(30,22);
    printf("%c"reset,179);
    cord(30,23);
    printf("%c"reset,179);
    cord(30,24);
    printf("%c"reset,179);
    cord(30,25);
    printf("%c"reset,179);



    cord(30,25);
    printf("%c",192);
    for(int i = 0; i<25; i++)
    {
        printf("%c"reset,196);
    }
    printf("%c"reset,217);


    cord(56,20);
    printf("%c"reset,179);
    cord(56,21);
    printf("%c"reset,179);
    cord(56,22);
    printf("%c"reset,179);
    cord(56,23);
    printf("%c"reset,179);
    cord(56,24);
    printf("%c"reset,179);


    //thumbnail 3
    cord(58,12);
    printf("%c",218);
    for(int i = 0; i<25; i++)
    {
        printf("%c"reset,196);
    }

    printf("%c"reset,191);


    cord(59,17);
    printf("%c DIU Green Campus",219);



    cord(58,13);
    printf("%c"reset,179);
    cord(58,14);
    printf("%c"reset,179);
    cord(58,15);
    printf("%c"reset,179);
    cord(58,16);
    printf("%c"reset,179);
    cord(58,17);
    printf("%c"reset,179);
    cord(58,18);
    printf("%c"reset,179);


    cord(58,18);
    printf("%c",192);
    for(int i = 0; i<25; i++)
    {
        printf("%c"reset,196);
    }
    printf("%c"reset,217);

    cord(84,13);
    printf("%c"reset,179);
    cord(84,14);
    printf("%c"reset,179);
    cord(84,15);
    printf("%c"reset,179);
    cord(84,16);
    printf("%c"reset,179);
    cord(84,17);
    printf("%c"reset,179);



    //thumbnail 4
    cord(58,19);
    printf("%c",218);
    for(int i = 0; i<25; i++)
    {
        printf("%c"reset,196);
    }

    printf("%c"reset,191);

    cord(59,24);
    printf("%c Tesla New Project!",219);

    cord(58,20);
    printf("%c"reset,179);
    cord(58,21);
    printf("%c"reset,179);
    cord(58,22);
    printf("%c"reset,179);
    cord(58,23);
    printf("%c"reset,179);
    cord(58,24);
    printf("%c"reset,179);
    cord(58,25);
    printf("%c"reset,179);

    cord(58,25);
    printf("%c",192);
    for(int i = 0; i<25; i++)
    {
        printf("%c"reset,196);
    }
    printf("%c"reset,217);

    cord(84,20);
    printf("%c"reset,179);
    cord(84,21);
    printf("%c"reset,179);
    cord(84,22);
    printf("%c"reset,179);
    cord(84,23);
    printf("%c"reset,179);
    cord(84,24);
    printf("%c"reset,179);


    //menu box
    cord(98,25);
    printf(CYN"%c",218);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }

    cord(98,27);
    printf("%c",192);
    for(int i=0; i<15; i++)
    {
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
    printf(BMAG"4."WHT" Menu");

    //filter
    cord(98,12);
    printf(CYN"%c",218);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }

    cord(98,14);
    printf("%c",192);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }
    cord(114,12);
    printf("%c",191);
    cord(114,14);
    printf("%c",217);
    cord(114,13);
    printf("%c",179);
    cord(98,13);
    printf("%c"reset,179);

    cord(103,13);
    printf("Account");

    //accout norti filter creat


    //nortifications
    //filter
    cord(98,15);
    printf(CYN"%c",218);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }

    cord(98,17);
    printf("%c",192);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }
    cord(114,15);
    printf("%c",191);
    cord(114,17);
    printf("%c",217);
    cord(114,16);
    printf("%c",179);
    cord(98,16);
    printf("%c"reset,179);

    cord(100,16);
    printf("Nortification");


    //creat section
    cord(98,18);
    printf(CYN"%c",218);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }

    cord(98,20);
    printf("%c",192);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }
    cord(114,18);
    printf("%c",191);
    cord(114,20);
    printf("%c",217);
    cord(114,19);
    printf("%c",179);
    cord(98,19);
    printf("%c"reset,179);

    cord(103,19);
    printf(" Filter");

    //creat
    cord(98,21);
    printf(CYN"%c",218);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }

    cord(98,23);
    printf("%c",192);
    for(int i=0; i<15; i++)
    {
        printf("%c",196);
    }
    cord(114,21);
    printf("%c",191);
    cord(114,23);
    printf("%c",217);
    cord(114,22);
    printf("%c",179);
    cord(98,22);
    printf("%c"reset,179);

    cord(103,22);
    printf("+ Create");



    //asking choice
    char url[50];
    int choice;
    cord(108,3);
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        goPrev();
        break;
    case 2:
        goFrwd();
        break;
    case 3:
        searchPage(url);
        if(strcmp(url,"home")==0)
        {
            homePage();
        }
        else if(strcmp(url,"diu.edu.bd")==0)               // insert func er kaaj baki ekhane
        {
             insert("DIU",url);
            diu();
        }
        else if(strcmp(url,"elearn.daffodilvarsity.edu.bd")==0)
        {
            insert("BLC",url);
            blc();
        }
        else if(strcmp(url,"codeforces.com")==0)
        {
            insert("CodeForces",url);
            cf();
        }
        else if(strcmp(url,"facebook.com")==0)
        {
            insert("Facebook",url);
            fb();
        }
        else if(strcmp(url,"youtube.com")==0)
        {
            insert("Youtube",url);
            yt();
        }
        else if(strcmp(url,"x.com")==0)
        {
            insert("X",url);
            x();
        }
        else if(strcmp(url,"gmail.com")==0)
        {
            insert("Gmail",url);
            gmail();
        }
        else
        {
            error_p();
            break;
        }
        break;
    case 4:
        menuPage();
        break;

    default:
        system("cls");
        error();

    }



}

void loading()
{

    int dotCount = 5;
    int loopCount = 2;

    for (int loop = 0; loop < loopCount; loop++)
    {
        for (int i = 0; i <= dotCount; i++)
        {
            cord(58,15);
            printf(GRN"Working on it");
            for (int j = 0; j < i; j++)
            {
                printf(".");
            }

            Sleep(100);
        }
        cord(58,15);
        printf("Working on it      ");

        Sleep(100);
    }
    cord(58,15);
    printf("                                           "reset);


}

void allHistory()
{
    menuDesign();

    cord(21,6);
    printf(WHT BLUB" %-37s %-42s %-15s","Website Name","Webpage URL","Time Visited "reset);

    printAll();

    cord(56,27);
    printf(CYN"Press any key to continue"reset);
    getch();
    menuPage();


}

void deleteAllHistory()
{
    menuDesign();

    loading();
    cord(55,15);
    printf(BRED"All History Have Been Purged");
    cord(56,27);
    printf(CYN"Press any key to continue"reset);
    getch();
    menuPage();

}

void searchHistory()
{
    menuDesign();

    cord(81,2);
    printf(CYN"%c",218);

    for(int i=0;i<32;i++){
        printf("%c",196);
    }

    cord(114,2);
    printf("%c",191);
    cord(114,3);
    printf("%c",179);
    cord(114,4);
    printf("%c",217);

    cord(82,4);
    for(int i=0;i<32;i++){
        printf("%c",196);
    }

    cord(81,4);
    printf("%c",192);
    cord(81,3);
    printf("%c"reset,179);

    cord(83,3);
    printf("Find: ");





}

/*void currentPage()
{
    system("cls");
    box();

    if(strcmp(current->url,"diu.edu.bd")==0){
        diu();
    }else if(strcmp(current->url,"elearn.daffodilvarsity.edu.bd")==0){
        blc();
    }else if(strcmp(current->url,"codeforces.com")==0){
        cf();
    }else if(strcmp(current->url,"facebook.com")==0){
        fb();
    }else if(strcmp(current->url,"youtube.com")==0){
        yt();
    }else if(strcmp(current->url,"x.com")==0){
        x();
    }else if(strcmp(current->url,"gmail.com")==0){
        gmail();
    }

    time(&current->tm);
    struct tm* local=localtime(&current->tm);
    strftime(current->tm,sizeof(current->tm),"%a %I:%M:%S %p",local);
}*/

void goPrev()
{

    if(current->prev==NULL){
        homePage();
    }

    node *ptr=current->prev;
    node *temp=ptr;
    node *trv=current;

    int trvcount=prevCount;
    while(trvcount>0){
        trv=trv->prev;
        trvcount--;
    }

    node *newtemp=(node*)malloc(sizeof(node));
    strcpy(newtemp->urlName,temp->urlName);
    strcpy(newtemp->url,temp->url);
    time(&newtemp->tm);
    struct tm* local=localtime(&newtemp->tm);
    strftime(newtemp->tmstr,sizeof(newtemp->tmstr),"%a %I:%M:%S %p",local);
    newtemp->next=NULL;
    newtemp->prev=NULL;

    strcpy(temp->urlName,trv->urlName);
    strcpy(temp->url,trv->url);
    time(&temp->tm);
    local=localtime(&temp->tm);
    strftime(temp->tmstr,sizeof(temp->tmstr),"%a %I:%M:%S %p",local);

    strcpy(trv->urlName,current->urlName);
    strcpy(trv->url,current->url);
    time(&trv->tm);
    local=localtime(&trv->tm);
    strftime(trv->tmstr,sizeof(trv->tmstr),"%a %I:%M:%S %p",local);

    strcpy(current->urlName,newtemp->urlName);
    strcpy(current->url,newtemp->url);
    time(&current->tm);
    local=localtime(&current->tm);
    strftime(current->tmstr,sizeof(current->tmstr),"%a %I:%M:%S %p",local);

    free(newtemp);
    ptr=ptr->prev;
    if(ptr==NULL){
        homePage();
    }
    prevCount++;

    if(strcmp(current->url,"diu.edu.bd")==0){
        diu();
    }else if(strcmp(current->url,"elearn.daffodilvarsity.edu.bd")==0){
        blc();
    }else if(strcmp(current->url,"codeforces.com")==0){
        cf();
    }else if(strcmp(current->url,"facebook.com")==0){
        fb();
    }else if(strcmp(current->url,"youtube.com")==0){
        yt();
    }else if(strcmp(current->url,"x.com")==0){
        x();
    }else if(strcmp(current->url,"gmail.com")==0){
        gmail();
    }


}

void goFrwd()
{

}

void insert(char urlname[],char url[])
{
    if(historyCount>=maxHistory){
        del(head);
    }

    node *newnode=(node*)malloc(sizeof(node));
        strcpy(newnode->urlName,urlname);
        strcpy(newnode->url,url);
        time(&newnode->tm);
        struct tm* local=localtime(&newnode->tm);
        strftime(newnode->tmstr,sizeof(newnode->tmstr),"%a %I:%M:%S %p",local);
        newnode->next=NULL;
        newnode->prev=NULL;


    if(head==NULL){
        head=newnode;
        tail=newnode;
        current=newnode;
    }else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
        current=tail;
    }

    historyCount++;

}

void del(node *head)
{
    node *ptr=head;
    head=head->next;
    head->prev=NULL;
    ptr->next=NULL;
    free(ptr);
}

void delall()
{
    node *ptr=tail;
    current=NULL;
    while(ptr!=head){
        tail=ptr->prev;
        free(ptr);
        ptr=tail;

    }
    tail=NULL;
    head=NULL;
    free(ptr);
    historyCount=0;
}

void printAll()
{
    menuDesign();
    if(head==NULL){
        //cord(50,15);
        printf("Empty\n");
        //return;
    }

    int y=8;
    node *temp=tail;
    while(temp!=NULL){
        cord(21,y);
        printf("%-38s %-40s %-15s\n",
              temp->urlName,
              temp->url,
              temp->tmstr);
        temp=temp->prev;
        y++;
    }

}































