//VISITA “CON FINESTRA”
/* Esemio: restituisci in output il numero degli elementi del vettore che sono somma dei loro due predecessori immediati */
#include <stdio.h>
#include <stdlib.h>

int numsum(int A[ ], int n)
{
    int i=0;
    int count = 0;
    if (n<=2) return 0;
    else
        if (A[0]==(-1)) return 0;
    else
        if (A[1]==(-1)) return 0;
    else
        {
            i=2;
            /* INVARIANTE: count e’ il numero di elementi di A uguali alla somma dei due predecessori, considerando gli
            elementi da posizione 0 a posizione i-1 */
            while (A[i]!= (-1))
            {
                if (A[i]==(A[i-1]+A[i-2])) count = count +1;
                i=i+1;
            }
        }
    return count;
}

int main(){
    int A[]={1,3,4,7,1,8,-1};
    int sum = numsum(A,7);
    printf("%d\n",sum);
}