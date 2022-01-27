#include <stdio.h>
int delete()
{
    system("cls");
    fflush(stdin);

    printf("Delete Function Is Activated\n\n\n");

    printf("  ____  U _____ u  _     U _____ u  _____  U _____ u \n");
    printf(" |  _\"\\ \\| ___\"|/ |\"|    \\| ___\"|/ |_ \" _| \\| ___\"|/ \n");
    printf("/| | | | |  _|\" U | | u   |  _|\"     | |    |  _|\"   \n");
    printf("U| |_| |\\| |___  \\| |/__  | |___    /| |\\   | |___   \n");
    printf(" |____/ u|_____|  |_____| |_____|  u |_|U   |_____|  \n");
    printf("  |||_   <<   >>  //  \\\\  <<   >>  _// \\\\_  <<   >>  \n");
    printf(" (__)_) (__) (__)(_\")(\"_)(__) (__)(__) (__)(__) (__) \n\n\n");


    int status;
    char file_name[25];

    printf("Enter the date of file you wish to delete\n");
    gets(file_name);

    status = remove(file_name);

    if (status == 0)
        printf("%s file deleted successfully.\n", file_name);
    else
    {
        printf("Unable to delete the file\n");
        perror("Following error occurred");
    }
    system("pause");

    printf("Press Enter To Return To Menu.... ");
    system("pause");
    menu();
    return 0;
}