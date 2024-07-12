#include <stdio.h>
#include <stdlib.h>

void printgreater(int A[ ], int n, int x)
{
    int i;
    i=0;
    /* invariante: ho stampato tutti gli elementi di A piu’ grandi di x da posizione 0 fino a posizione A[i] esclusa*/
    while (A[i] != -1)
    {
        if (A[i] > x)
        {
            printf("%d\n", A[i]);
        }
        i=i+1;
    }
}

int main(){
    int A[] = {23,12,45,33,23,9,57,564,43,563,-1};
    printgreater(A,11,44);
}