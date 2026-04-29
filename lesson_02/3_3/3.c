#include <stdio.h>
#include <string.h>

int main(void)
{
    int n,m;
    double R = 0;
    double iloczyn;
    double pomoc = 1;
    printf("Podaj n: ");
    scanf("%d",&n);
    printf("Podaj m: ");
    scanf("%d",&m);
    printf("\n");

    for(int i = 0; i < n; i++){
        pomoc = 1;
        for(int j = 0; j < m; j++){
            iloczyn = (double)(i * i + j * j - 1) / (2 * i + 3 * j + 4);
            pomoc = pomoc * iloczyn;
            //printf("%f",pomoc);
            //printf("%f",iloczyn);
        }
        R = R + pomoc;
    }
    printf("Wynik to %f \n",R);
    return 0;
}