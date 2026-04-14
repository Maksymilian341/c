#include <stdio.h>
#include <string.h>

int main(void)
{
    int wysokosc;
    int dol;
    int X = 1;
    printf("Podaj wysokość trojkata: \n");
    scanf("%d",&wysokosc);
    
    while(wysokosc > 0){
        for(int i = 0; i < wysokosc - 1; i++){
            printf(" ");
        }

        for(int i = 0; i < X; i++){
            printf("X");
        }

        for(int i = 0; i < wysokosc - 1; i++){
            printf(" ");
        }

        printf("\n");
        wysokosc = wysokosc - 1;
        X = X + 2;
    }
    
    return 0;
}