#include <stdio.h>
#include <string.h>

int suma(int a){
    if(a < 10){
        return a;
    }
    else{
        return (a % 10) + suma(a / 10);
    }
}
int main()
{   
    int a;
    int wynik;

    printf("Podaj liczbę a: \n");
    scanf("%d",&a);
    wynik = suma(a);
    printf("suma cyfr dziesiętnych w liczbie %d to %d",a,wynik);
    printf("\n");
    return 0;
}
