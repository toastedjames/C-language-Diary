#include <stdio.h>
#include <stdlib.h>

int themeswitcher(){
    fflush(stdin);
    system("cls");


    int color;
    printf("Theme Switcher Function Is Activated\n\n\n");


    printf(" ___       ___                                                     ___  \n");
    printf("(   )     (   )                                                   (   ) \n");
    printf(" | |_      | | .-.     .--.    ___ .-. .-.     .--.       .--.     | |  \n");
    printf("(   __)    | |/   \\   /    \\  (   )   '   \\   /    \\    /  _  \\    | |  \n");
    printf(" | |       |  .-. .  |  .-. ;  |  .-.  .-. ; |  .-. ;  . .' `. ;   | |  \n");
    printf(" | | ___   | |  | |  |  | | |  | |  | |  | | |  | | |  | '   | |   | |  \n");
    printf(" | |(   )  | |  | |  |  |/  |  | |  | |  | | |  |/  |  _\\_`.(___)  | |  \n");
    printf(" | | | |   | |  | |  |  ' _.'  | |  | |  | | |  ' _.' (   ). '.    | |  \n");
    printf(" | ' | |   | |  | |  |  .'.-.  | |  | |  | | |  .'.-.  | |  `\\ |   |_|  \n");
    printf(" ' `-' ;   | |  | |  '  `-' /  | |  | |  | | '  `-' /  ; '._,' '   .-.  \n");
    printf("  `.__.   (___)(___)  `.__.'  (___)(___)(___) `.__.'    '.___.'   (   ) \n");
    printf("                                                                   '-'  \n\n\n");


    printf("Choose Your Theme: \n\n");
    printf("1: Light Mode\n");
    printf("2: Dark Mode\n");
    printf("3: Chinese New Year\n");
    printf("4: Japanese Morning\n");
    printf("5: Finnish Bliss\n");
    printf("6: Scottish Bagpipes\n");
    printf("7: Brazilian Soccer\n");
    printf("8: Spanish El Matador\n");
    printf("9: Argentinian Beach\n");
    printf("10: Nigerian Jungle\n\n");
    printf("You Chose: ");
    scanf("%d",&color);
    switch(color){
        case 1:{
            system("Color F0");
            menu();
            break;
        }
        case 2:{
            system("Color 0F");
            menu();
            break;
        }
        case 3:{
            system("Color 4E");
            menu();
            break;
        }
        case 4:{
            system("Color F4");
            menu();
            break;
        }
        case 5:{
            system("Color F1");
            menu();
            break;
        }
        case 6:{
            system("Color 1F");
            menu();
            break;
        }
        case 7:{
            system("Color 2E");
            menu();
            break;
        }
        case 8:{
            system("Color EC");
            menu();
            break;
        }
        case 9:{
            system("Color 9F");
            menu();
            break;
        }
        case 10:{
            system("Color AF");
            menu();
            break;
        }
        default :{
            printf("Incorrect Option Selected\nTry Again!");
            system("pause");system("cls");
            menu();
            break;
        }
    }
}