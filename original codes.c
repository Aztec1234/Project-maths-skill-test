#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void start_screen();//start screen may be the loading screen
void menu();
void start_game();
void levels();
void instructions();
void about_us();
void leave();
void delay(unsigned int mseconds)
{
    clock_t goal=mseconds+clock();
    while (goal>clock());
}
int main()
{
    system("cls");
    start_screen();
    getch();
    return 0;
}
void start_screen()
{
 system("COLOR 1F");
 printf("\n\n\n\n");
 printf("\noo   oo     o    ooooooooo o     o     ooooooo  o    o  ooooooo  o     o");
 printf("\no o o o    o o       o     o     o     o        o   o      o     o     o");
 printf("\no  o  o   o   o      o     o o o o     ooooooo  o o        o     o     o");
 printf("\no     o  o ooo o     o     o     o           o  o   o      o     o     o");
 printf("\no     o o       o    o     o     o     ooooooo  o    o  ooooooo  ooooo ooooo");
 printf("\n\n\n\n");
 printf("\n\t\t\tooooooo ooooo ooooo ooooooo");
 printf("\n\t\t\t   o    o     o        o");
 printf("\n\t\t\t   o    ooooo ooooo    o");
 printf("\n\t\t\t   o    o         o    o");
 printf("\n\t\t\t   o    ooooo ooooo    o");
 printf("\n\n\n\n\n\nPRESS ANY KEY TO CONTINUE....");
 getch();
 menu();
}
void menu()
{
    int choice;
    system("cls");
    printf("\n\n\n\n\n\n\n\t\t\t\t [1] START");
    printf("\n\n\t\t\t\t [2] LEVELS");
    printf("\n\n\t\t\t\t [3] INSTRUCTIONS");
    printf("\n\n\t\t\t\t [4] ABOUT US");
    printf("\n\n\t\t\t\t [5] EXIT");
    printf("\n\n\n\n\n\n\nENTER YOUR OPTION CHOICE:.. ");
    scanf("%d",&choice);
    do{
    switch(choice)
    {
        case 1:
        {
            start_game();
            break;
        }
        case 2:
        {
            levels();
            break;
        }
        case 3:
        {
            instructions();
            break;
        }
        case 4:
        {
            about_us();
            break;
        }
        case 5:
        {
            leave();
            break;
        }
        default:
        {
            printf("\nPLEASE ENTER ONLY OPTION NO. FROM 1 TO 5: ");
        }
    }
}while(choice!=5);
}

void start_game()
{
    int i,ans;

    printf("\n\n\n\t\t\t\tNOW LOADING");
    for(i=0;i<20;i++){
    srand(time(NULL));
  printf("%d\n",rand()/(RAND_MAX/10));}
////    for(i=1;i<4;i++){
//     printf(".");
//     delay(1000);
//    }
//    delay(500);

////        system("cls");
//                printf("\n\n\n\n\n\n\n\n\n\n\n\n%65s","TIME: ");
//        printf("%d",i);
//        delay(1000);
    system("cls");
        printf("\n\n\n\n What would be the value of the expression:\n\t\t\t2+((5*10)/25)*2 ??");
        printf("\n\n\t\t [1]6\t\t[2]5\t\t[3]8\t\t[4]Skip\n\nYOUR ANSWER\t");
        scanf("%d",&ans);
        if(ans!=1){
            printf("Wrong!");

        }
    getch();
}

void levels()
{
    system("cls");
    printf("levels");

}

void instructions()
{
    system("cls");
    printf("INSTRUCTION;\n");
    printf("            Enter the correct answer of the question and the level will increase ");

}

void about_us()
{
    system("cls");
    printf("\n\n\t\tCREDITS:\n");
    printf("\t\tAyush Guidel\t71016\n\t\tBirat Sapkota\t71021\n\t\tKrishna Sapkota\t71035");
    printf("\n\n\n\n\n\n\n\t\tPress any key to return..");
    system("cls");
    getch();
    start_screen();

}

void leave()
{
    system("cls");
    printf("\n\n\n\n\n\n\t\t\t\tThanks for playing!!!");
    return;
}
