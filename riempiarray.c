/*creazione iterativa di un vettore di numeri naturali maggiori di 0 leggendo input
vettore con tappo*/
#include <stdio.h>
#include <stdlib.h>

// Dichiarazione della funzione di caricamento dell'array
int loadvet(int[], int);

int main()
{
    int n;
    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &n);

    // Dichiarazione dell'array di dimensione n
    int A[n];
    
    // Chiamata alla funzione di caricamento dell'array
    int result = loadvet(A, n);

    // Verifica del risultato della funzione di caricamento
    if (result) {
        printf("Array caricato con successo.\n");
    } else {
        printf("Errore: Input non valido.\n");
    }

    return 0;
}

int loadvet(int A[ ], int n)
{
    int i=0;
    int ok=1;
    int x;
    scanf("%d", &x);
    A[i]=x;
    /* il vettore A contiene tutti i numeri finora letti */
    while ((A[i] != -1) && (i<n-1))
    {
        i=i+1;
        scanf("%d", &x);
        A[i]=x;
    }
        if (A[i]!=-1)
        {
            printf("errore");
            ok=0;
        }
        else return(ok);
}