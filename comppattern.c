/* AGGIUSTATO */
/* Esempio: restituisci la somma dei primi k elementi che sono maggiori del loro predecessore
Es. A: [2|5|6|1|4|3|2|1|3|4|-1] n:11 k:4 OUTPUT: 18 */
#include <stdio.h>
#include <stdlib.h>

// A[] : vettore di interi con tappo -1
// dim: dimesione del vettore
// k: numero di elementi da sommare
int sumvet(int A[ ], int dim, int k)
{
    int i=0; //contatore per array
    int sum = 0; 
    int count = 0;
    if (dim <= 1)
    {
        //printf("errore=%d\n", 1);
        return 0;
    }
    else if (A[0]==(-1))
    {
       // printf("errore=%d\n", 2);
        return 0;
    }
    else
    {
        /* INVARIANTE: count e’ il numero degli elementi di A maggiori del loro predecessore, considerando gli elementi
        da posizione 0 a posizione i-1; sum e’ la somma di tali elementi */
        while ((A[i] != (-1)) && (count <= k))
        {
            i = i + 1;
            //printf("i=%d    errore=%d\n" ,i,3);
            if (A[i] > A[i-1])
            {
                count = count + 1;
                sum = sum + A[i];
            }
        }
    }
    return sum;
}

int main(){
    int A[] = {2,5,6,1,4,3,2,1,3,4,-1};
    int var = sumvet(A,11,4);
    printf("%d\n", var);
}

