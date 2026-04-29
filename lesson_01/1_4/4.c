#include <stdio.h>

int main(void)
{
    int m,n;
    double T;
    scanf("%d %d",&m,&n);
    T=(5+(4+(3+2*(m-n-1))))/(((2*(m+n+1)-3)-4)-5);
    printf("Wartość wyrazenia to %lf\n",T);
}