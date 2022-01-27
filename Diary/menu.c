#include <stdio.h>
#include <stdlib.h>


// Menu Function
int menu(){

    fflush(stdin);
    system("cls");
    int s; //s=switch
    printf("\n\n	**********   Welcome To Your Personal Diary Pager   **********\n\n");
    printf("1: Write\n2: Read\n3: Delete\n4: Theme Switcher\n5: Exit\n\nSelect An Option : ");
    scanf("%d",&s);
    switch(s){

        case 1:{
            write();
            break;
        }
        case 2:{
            read();
            break;
        }
        case 3:{
            delete();
            break;
        }
        case 4:{
            themeswitcher();
            break;
        }
        case 5:{
            exit1();
            break;
        }
        default :{
            printf("Wrong Option Selected, Please Try Again\n");
            system("pause");system("cls");
            menu();
            break;
        }

    }
}


