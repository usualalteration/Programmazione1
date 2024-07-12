#include <stdio.h>
#include <stdlib.h>

void loadmatrix(int A[3][4], int n, int m);
void printmatrix(int A[3][4], int n, int m);

int main(){
    int A[3][4];
    int n = 3;
    int m = 4;
    loadmatrix(A,n,m);
    printmatrix(A, n, m);
}

void loadmatrix(int A[3][4], int n, int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0; j<m; j++){
            scanf("%d", &A[i][j]);
        }
    }
}

void printmatrix(int A[3][4], int n, int m){
    int i,j;
    printf("%s\n", "Array riempito:");
    for(i=0;i<n;i++){
        for(j=0; j<m; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}