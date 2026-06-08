#include <stdio.h>
#include <math.h>

void zanab(int n, int m, double A[n][m], double B[n][m], int i, int j){
    
    B[i][j] = ((sin(A[i][j]) * sin(A[i][j])) - 3) / sqrt (A[i][j] + 1);
}

int main(){
    int n = 2;
    int m = 3;
    double A[2][3] = {{-10,2,3}, {4,5,6}};
    double B[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (A[i][j] <= -1){
                B[i][j] = 3.31;
            }
            else
                zanab(n,m,A,B,i,j);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%f \n",B[i][j]);
        }
    }
    
}