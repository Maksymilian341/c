#include <stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f",&a,&b);
    c = (a * (a + b)) / ((a + b) * (a + b));
    printf("wynik działania to %.2f\n",c);
    return 0;
}