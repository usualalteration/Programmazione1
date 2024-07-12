// Algoritmo per eseguire somma e prodotto di due matrici
/* 
1. Dimensiono staticamente usando la costante DIM 4 matrici: A e B sono le matrici di partenza, P ed S sono rispettivamente prodotto e somma
2. Chiedo al terminale di inserire il numero N di righe pari al numero di colonne
3. Verifico che N sia minore di DIM
4. Chiedo di inserire la matrice A, la matrice B
5. Eseguo il prodotto righe per colonne e lo metto in P
6. Stampo P
7. Eseguo la somma A+B elemento per elemento e la metto in S
8. Stampo S 
*/
#include <stdio.h>
#include <stdlib.h>
#define DIM 3
// const int DIM = 10;

void riempimat(int M[DIM][DIM]);
void calcolaprodotto(int A[DIM][DIM],int B[DIM][DIM],int P[DIM][DIM]);

int main(){
    int A[DIM][DIM];
    int B[DIM][DIM];
    int P[DIM][DIM];
    int S[DIM][DIM];
    printf("Riempimento matrice A di 9 elementi\n");
    riempimat(A); 
    printf("Riempimento matrice B di 9 elementi\n");
    riempimat(B); 

}

void riempimat(int M[DIM][DIM]){
    int i,j;
    for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++){
            printf("\nElemento [%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

void calcolaprodotto(int A[DIM][DIM],int B[DIM][DIM],int P[DIM][DIM]){

}