#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int m;
    printf("Podaj liczbę wierszy macierzy A i B: ");
    scanf("%d",&n);
    printf("Podaj liczbę kolumn macierzy A i B: ");
    scanf("%d",&m);
    int A[n][m];
    int B[n][m];

    printf("Wczytaj macierz A \n");
    for(int i = 0; i < n; i++){
        printf("Wiersz %d \n",i + 1);
        for(int j = 0; j < m; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Wczytaj macierz B \n");
    for(int i = 0; i < n; i++){
        printf("Wiersz %d \n",i + 1);
        for(int j = 0; j < m; j++){
            scanf("%d", &B[i][j]);
        }
    }
   
    int R[n][m];
    int P[n][m];

    //macierz R
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(A[i][j] == B[i][j]){
                R[i][j] = 1;
            }
            else{
                R[i][j] = 0;
            }
        }
    }

    //macierz P
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(A[i][j] > B[i][j]){
                P[i][j] = 1;
            }
            else{
                P[i][j] = 0;
            }
        }
    }

    printf("Macierz R \n");
    for(int i = 0; i < n; i++){
        printf("\n");
        for(int j = 0; j < m; j++){
            printf("%d",R[i][j]);
        }
    }

    printf("\n");
    printf("Macierz P \n");
    for(int i = 0; i < n; i++){
        printf("\n");
        for(int j = 0; j < m; j++){
            printf("%d",P[i][j]);
        }
    }
    printf("\n");
    return 0;
}