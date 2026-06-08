#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    char a[1000];
    double dane[6];
    double average;
    double dane_do_sort[4];

    fptr = fopen("Pomiary.txt","r");

    for(int i = 0; i < 6; i++){
        fgets(a,1000,fptr);
        dane[i] = atof(a);
    }

    fclose(fptr);
    
    if(dane[5] == 0){
        average = (dane[1] + dane[2] + dane[3] + dane[4]) / 4;
        fptr = fopen("Wyniki.txt","w");
        fprintf(fptr, "%f \n", dane[0]);
        fprintf(fptr, "%f \n", average);
        fprintf(fptr, "%f \n", dane[5]);
        fclose(fptr);
    }

    dane_do_sort[0] = dane[1];
    dane_do_sort[1] = dane[2];
    dane_do_sort[2] = dane[3];
    dane_do_sort[3] = dane[4];

    if(dane_do_sort[0] > dane_do_sort[1]){
        int temp = dane_do_sort[1];
        dane_do_sort[1] = dane_do_sort[0];
        dane_do_sort[0] = temp;     
    }
    if(dane_do_sort[1] > dane_do_sort[2]){
        int temp = dane_do_sort[2];
        dane_do_sort[2] = dane_do_sort[1];
        dane_do_sort[1] = temp;   
    }
    if(dane_do_sort[2] > dane_do_sort[3]){
        int temp = dane_do_sort[3];
        dane_do_sort[3] = dane_do_sort[2];
        dane_do_sort[2] = temp;   
    }
    


    if(dane[5] == 1){
        fptr = fopen("Wyniki.txt","w");
        fprintf(fptr, "%f \n", dane[0]);
        fprintf(fptr, "%f \n", dane_do_sort[3]);
        fprintf(fptr, "%f \n", dane[5]);
        fclose(fptr);
    }

    if(dane[5] == 2){
        fptr = fopen("Wyniki.txt","w");
        fprintf(fptr, "%f \n", dane[0]);
        fprintf(fptr, "%f \n", dane_do_sort[0]);
        fprintf(fptr, "%f \n", dane[5]);
        fclose(fptr);
    }

    return 0;
}