#include <stdio.h>
int main()
{
    double a,b,c,largest;
    scanf("%lf %lf %lf",&a,&b,&c);
    
    largest = a;
    if(b > largest)
    largest = b;
    if(c > largest)
    largest = c;
    printf("largest number %le\t",largest);
    return 0;
}