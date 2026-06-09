#include <stdio.h>
#include <string.h>

int suma(int a){
    long long suma = 0;
    for(int i = 1; i < a; i++){
        if(a % i == 0){
            suma = suma + i;
        }
    }
    return suma;
}
int main()
{   
    long long a;
    int count = 0;
    printf("Podaj liczbę a: \n");
    scanf("%lld",&a);

    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= a; j++){
            if(i > j && i != j && suma(i) == j && suma(j) == i){
                printf("liczby %d i %d są zaprzyjaźnione.\n",i,j);
                count++;
            }
        }
    }
    
    if( count == 0){
        printf("W przedziale od 1 do %lld nie ma liczb zaprzyjaźnionych. \n",a);
    }
    return 0;
}
