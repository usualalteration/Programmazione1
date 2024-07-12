#include <stdio.h>
#include <stdlib.h>

int r,r2;
int x = 1;
int A[]={2,2,1,4,1,6,7,-1};

int countvet(int A[ ], int n, int x)
{
    int i=0;
    int count=0;
    /* INVARIANTE: count e’ il numero degli elementi del vettore piu’ grandi di x, da posizione 0 a posizione i-1 */
    while (A[i] != -1)
    {
        if (A[i] > x) count = count+1;
        i=i+1;
    }
    return(count);
}

int find(int A[ ], int n, int x)
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

int main(){
    r = countvet(A,8,x);
    printf("%d\n",r);
    r2 = find(A,8,7);
    printf("%d\n", r2);
}

