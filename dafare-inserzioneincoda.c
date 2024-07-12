//non finito
/*1.4.2
 MODIFICA DI UN VETTORE CON TAPPO: INSERZIONE DI NUOVI ELEMENTI
Nel seguito verranno analizzati alcuni problemi riguardanti l’inserzione di uno o piu’ nuovi elementi in un vettore “con
tappo”.*/
//INSERZIONE IN CODA
/* inserzione di un nuovo elemento x al fondo del vettore A; restituisce la posizione di x nel vettore, oppure -1 se non e’
stato possibile inserire x (non c’e’ piu’ spazio nel vettore) */
#include <stdio.h>

// Funzione per inserire un elemento prima dell'ultimo -1 nel vettore
// Restituisce 1 in caso di successo, -1 se non c'è spazio sufficiente
int tailinsert(int A[], int n, int x) {
    int i = 0;

    // Trova la posizione dell'ultimo -1 nel vettore o raggiunge la fine del vettore
    while (A[i] != -1 && i < n) {
        i = i + 1;
    }

    // Controlla se c'è spazio sufficiente per inserire x
    if (A[i]==-1 && i==n-1) {
        A[i] = x;        // Inserisce l'elemento x nella posizione trovata
        A[i + 1] = -1;   // Aggiunge il tappo -1 dopo l'elemento inserito
        return 1;        // Restituisce 1 in caso di successo
    } else {
        return -1;       // Se non c'è spazio sufficiente, restituisce -1 per indicare un errore
    }
}

int main() {
    // Esempio di utilizzo della funzione
    int vettore[11] = {1, 2, 3, 4, 5, 8, 7, 8, 9, 10, -1};
    int dimensione = 11;

    // Stampa il vettore originale
    printf("Vettore originale: ");
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", vettore[i]);
    }

    int elementoDaInserire = 22;

    // Esegue la funzione di inserimento e salva il risultato
    int risultato = tailinsert(vettore, dimensione, elementoDaInserire);

    // Verifica il risultato della funzione di inserimento
    if (risultato == 1) {
        printf("\nInserimento riuscito.\n");
    } else {
        printf("\nErrore: spazio insufficiente per l'inserimento.\n");
    }

    // Stampa il vettore dopo l'inserimento
    printf("Vettore dopo l'inserimento: ");
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", vettore[i]);
    }

    return 0;
}

