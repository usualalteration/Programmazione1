#include <stdio.h>
#include <stdlib.h>
/* Esemio: stampa i primi k numeri pari del vettore (se ci sono) */
void printsomeodd(int A[ ], int n, int k)
{
    int i=1;
    int count=0;
    /* INVARIANTE:
    count e’ il numero di elementi pari da posizione 0 a posizione i-1
    ho stampato tutti gli elementi da posizione 0 a posizione i-1 che soddisfano la condizione (sono nei primi k numeri
    pari) */
    while ((A[i] != -1) && (count < k))
    {
        if ((A[i] % 2) == 0)
        {
            count = count+1;
            printf("%d\n", A[i]);
        }
        i=i+1;
    }
}

int main(){
    int A[] = {23,12,45,33,24,10,57,564,43,563,-1};
    printsomeodd(A,11,2);
}