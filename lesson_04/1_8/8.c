#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
FILE *fptr;
char a[1000];
const int n = 2;
const int m = 6;
int dane[n][m];
int suma [m] = {0};
double srednia [m] = {0};

fptr = fopen("text.txt", "w");

fprintf(fptr, "1 2 3 5 2 0\n");
fprintf(fptr,"0 10 12 2 3 1 \n"); 

fclose(fptr);

fptr = fopen("text.txt", "r");

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        if (fscanf(fptr, "%d", &dane[i][j]) != 1) {
                dane[i][j] = 0; 
            }
    }
}


for(int i = 0; i < n; i++){
    printf("\n");
    for(int j = 0; j < m; j++){
        printf("%d ",dane[i][j]);
    }
}
printf("\n");


for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        suma [i] = suma[i] + dane[j][i];
    }
}

for(int i = 0; i < m; i++){
    srednia[i] = (double) suma[i] / 2;
}

printf("Suma: \n");
for(int i = 0; i < m; i++){
    printf("%d ",suma[i]);
}
printf("\n");

printf("Srednia: \n");
for(int i = 0; i < m; i++){
    printf("%f ",srednia[i]);
}
printf("\n");

return 0;
}