#include <stdio.h>
#include <math.h>

int main(void)
{
    float a,b,R;
    scanf("%f %f",&a,&b);
    R=4*a+2*((a-b-1)/(a*a+b*b+1));
    printf("Wartość wyraenia to %f\n",R);
    return 0;
}