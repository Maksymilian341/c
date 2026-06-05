#include <stdio.h>
#include <string.h>

int main(){
    
FILE *fptr;
char a[1000][1000];
int suma;

fptr = fopen("text.txt", "w");

fprintf(fptr, "1 2 3 5 2 \n0 10 12 2 3 1 "); 

fclose(fptr);

fptr = fopen("text.txt", "r");

}