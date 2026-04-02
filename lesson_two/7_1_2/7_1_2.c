#include <stdio.h>
#include <string.h>

int main(void)
{
    int n=5;
    int len;
    char O[6] = "O";
    while(n>0)
    {
        len=strlen(O);
        printf("%s\n",O);
        O[len]='O';
        O[len+1]='\0';
        n=n-1;
    }
    printf("\n");
}