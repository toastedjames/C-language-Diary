#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Password Function
int	password(char*n1,char *p1){
    int a1,b1,c1;
    a1=strcmp(n1,"ABCDEF");
    b1=strcmp(p1,"123456");
    c1=((a1==0)&&(b1==0));

    return c1;
}
