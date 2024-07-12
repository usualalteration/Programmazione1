/*1.4.1
 MODIFICA DEL CONTENUTO DELLE CELLE DEI VETTORI
Se la modifica riguarda solo il contenuto delle celle, questa si reduce in pratica ad una semplice visita del vettore.*/
/* Esempio: aumenta di x il contenuto degli elementi di A, solo se sono piu' grandi di y */
#include <stdio.h>
#include <stdlib.h>

// A[]: il vettore
// n: numero di elementi nel vettore
// x: numero da aggiungere se maggiori di y
// y: se gli elementi sono maggiori di y la funzione agguunge x
void addcond(int A[ ], int n, int x, int y)
{
    int i=0;
    /* INVARIANTE: Tutti gli elementi di A da posizione 0 a posizione i-1 piu’ grandi di y sono stati incrementati di x*/
    while (A[i] != -1)
    {
        if (A[i] > y) A[i] = A[i]+x;
        i = i+1;
    }
}

int main(){
    int i;
    int x = 5;
    int dim = 12;
    int A[] = {0, 4, 0, 3, 6, 0, 1, 24, 11, 4, 2, -1};
    int y = 2; //devono essere maggiori per essere incrementati di 5
    printf("Array originale\n");
    
    for(i=0; i<dim; i=i+1){
        printf("%d\n", A[i]);
    }

    addcond(A,dim,x,y);

    printf("\nArray modificato\n\n");

    for(i=0; i<dim; i=i+1){
        printf("%d\n", A[i]);
    }
}