#include <stdio.h>
#include <string.h>

int main(){
    
FILE *fptr;
char a[1000];
char b;
int suma;

printf("Podaj znak szukany w pliku text.txt.\n");
scanf("%c",&b);


fptr = fopen("text.txt", "w");

fprintf(fptr, "AAA AAA AAA AA BBB BBB C"); 

fclose(fptr);


fptr = fopen("text.txt","r");

fgets(a, 1000, fptr);

fclose(fptr);

for(int i = 0; i < strlen(a); i++){
    if(a[i] == b){
        suma++;
    }
}
printf("Znak %c występuję w pliku text.txt %d razy.\n",b,suma);
}