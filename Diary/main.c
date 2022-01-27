#include <stdio.h>
#include <stdlib.h>
int menu();
int	password(char *n,char*p);
int write();
int read();
int delete();
int themeswitcher();
int exit1();

int main() {
    int c;// c=condition
    char n[20],p[20];// n=name, p=password
    printf("\n\n	**********   Welcome To The Personal Diary   **********\n\n");
    printf("\t\t\t        _ _\n");
    printf("\t\t\t   .-. | | |\n");
    printf("\t\t\t   |M|_|A|N\n");
    printf("\t\t\t   |A|a|.|.|<\\\n");
    printf("\t\t\t   |T|r| | | \\\\\n");
    printf("\t\t\t   |H|t|M|Z|  \\\\\n");
    printf("\t\t\t   | |!| | |   \\>\n");
    printf("\t\t\t  \"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
    printf("	              Lets Verify Your Identity		     \n\n\n");
    system("pause");
    printf("Username : ");
    scanf("%s",n);
    printf("Password : ");
    scanf("%s",p);
    c=password(n,p);
    if (c==1){printf("\"Verification Successful\"\n");
        system("pause");menu();}
    else {printf("\"Verification Error, Please Try Again\"\n");
        system("pause");system("cls");main();
    }
}

