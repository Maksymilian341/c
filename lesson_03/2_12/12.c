#include <stdio.h>
#include <string.h>

struct towar{
    char nazwa [20];
    int ilosc;
    int cena;
};

void nowytowar(struct towar *t){
    printf("Podaj nazwę nowego towaru: ");
    scanf("%s", t->nazwa);
    printf("Podaj ilość nowego towaru: ");
    scanf("%d", &t->ilosc);
    printf("Podaj cenę nowego towaru: ");
    scanf("%d", &t->cena);
}

void print(struct towar t[],int rozmiar){
    printf("Nazwa        Ilosc       Cena\n");
    for(int i = 0; i < rozmiar; i++){
        printf("%s        %d        %d\n",t[i].nazwa, t[i].ilosc, t[i].cena);
    }
}

int suma(struct towar t[],int rozmiar){
    int suma_all = 0;
    for(int i = 0; i < rozmiar; i++){
        suma_all = suma_all + t[i].ilosc * t[i].cena;
    }
    return suma_all;
}

int main()
{   
    char opcja;
    struct towar t[49];
    int rozmiar = 0;
    int suma_all = 0;
    int i = 0;

    do{
    printf("\n[N]owy, [W]yswietl, [R]azem, [Q]uit: \n");
    scanf(" %c", &opcja);
    switch(opcja){
        case 'N':
        case 'n':
            if(i < 49){
            nowytowar(&t[i]);
            rozmiar++; 
            i++;
            }
            break;

        case 'W':
        case 'w':
            print(t,rozmiar);
            break;

        case 'R':
        case 'r':
            suma_all = suma(t,rozmiar);
            printf("Suma wartości wszystkich towarow to: %d\n",suma_all);
            break;

        case 'Q':
        case 'q':
            return 0;
            break;
    }
    } while(opcja != 'Q' && opcja != 'q');
    /*
    for(int i = 0; i < 4;i++){
        nowytowar(&t[i]);
        rozmiar++; 
    }
    */
    return 0;
}
