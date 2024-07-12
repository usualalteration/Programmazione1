/*1.3 RICERCA DI UN ELEMENTO dispense n.2 FONDAMENTI DI INFORMATICA*/
#include <stdio.h>
#include <stdlib.h>

/* restituisce l’indice della prima occorrenza di x in A. Se x non e’ presente nella lista, restituisce -1 */
int find(int A[ ], int x)
{
    int trovato=0;
    int i=0;
    while ((A[i] != -1) && (trovato == 0))
    {
        if (A[i]==x) trovato=1;
        else i=i+1;
    }
    if (trovato == 1) return (i);
    else return(-1);
}
/* funzione che restituisce l’indice della k-esima occorrenza di x in A */
/* versione che utilizza la find */
int findnth(int A[ ], int x, int k)
{
    int count=0; //n. occorrenze già trovate
    int trovato=0; // flag che vale 1 quando è stata trovata la k-esima occorrenza
    int i=0;
    /* INVARIANTE: count e’ il numero degli elementi di A uguali ad x, considerando gli elementi da posizione 0 a
    posizione i-1 */
    while ((A[i] != -1) && (trovato == 0) && (i != -1))
    {
        i=i+find(&A[i],x);
        // printf("k=%d    i=%d   count=%d\n",k,i,count); //metodo per verificare dove si è arrivati
        if (i != -1){
            count=count+1;
            if (count == k) trovato=1;
            else {
                i=i+1;
            }
        }
    }
    return(i);
}

int main()
{
    int A[] = {12, 23, 4, 21, 44, 23, 1, 33, 23, 4, 6, 23, -1};

    // Chiamata alla funzione findth per trovare la terza occorrenza di 23 in A
    int var = findnth(A, 23, 3);

    // Stampare l'indice della terza occorrenza di 23 in A
    printf("%d\n", var);

    return 0;
}

