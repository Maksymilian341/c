#include <stdio.h>

int main(void)
{
    int a;
    float b; 
    float cel;
    float far;
    printf("0 - celsius -> farenheit\n1 - farenheit -> celsius\n");
    scanf("%d",&a);
    printf("Podaj ilość stopni\n");
    scanf("%f",&b);
    if(a==0)
    {
    far=(9.0/5.0)*b+32;
    printf("%f stopni celcjusza to %f stopni farenheita\n",b,far);
    }
    if(a==1)
    {
    cel=(5.0/9.0)*(b-32);
    printf("%f stopni farenheita to %f stopni celcjusza\n",b,cel);
    }
    return 0;
}