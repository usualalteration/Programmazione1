/* Esempio: conta i numeri del vettore piu grandi di un parametro x */

#include <stdio.h>
#include <stdlib.h>

int countvet(int A[ ], int n, int x)
{
    int i=1;
    int count=0;
    /* INVARIANTE: count e’ il numero degli elementi del vettore piu’ grandi di x, da posizione 0 a posizione i-1 */
    while (A[i] != -1)
    {
        if (A[i] > x){
            count = count+1;
        }
        
        i=i+1;
    }

    return(count);
}

int main(){
    int A[] = {23,12,45,33,23,9,57,564,43,563,-1};
    int numero = countvet(A,11,44);
    printf("%d\n",numero);
}